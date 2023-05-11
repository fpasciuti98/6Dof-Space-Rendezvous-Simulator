%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%               6-DoF Small Satellite Simulator
%                   Rendez-vous maneuvre
%                    Francesco Pasciuti
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clear
close all
clc
%%
%%%%%%%%%%%%%%%%%%% 
T_run = 10000;                                                             
%%%%%%%%%%%%%%%%%%%


%% Section 0: Preliminary Data

%--------------------------------------------------------------------------    
%   Orbital elements
%--------------------------------------------------------------------------
mu     = 3.986012*10^14;                                                    % [m^3/s^2]  Standard gravitational parameter
g0     = 9.81;                                                              % [m/s^2]    Zero gravity
r_E    = 6378.145*10^3;                                                     % [m]        Earth Radius
height = 400*10^3;                                                          % [m]        Reference altitude
r_t      = r_E + height;                                                    % [m]        Orbit Radius
r_c   = r_t-3e3;                                                            % [m]        Orbit chaser radius
omega  = (mu/r_t^3)^0.5;                                                    % [rad]      Target angular velocity
v      = sqrt(mu/r_t);                                                      % [m/s]      Tangential orbital speed
vc     = sqrt(mu/r_c);                                                       % [m/s]      Tangential Chaser orbital speed
Period = 2*pi*sqrt(r_t^3/mu);

%--------------------------------------------------------------------------
% Simulation parameters
%--------------------------------------------------------------------------
tsp_0  = 0.02;                                                              % [s]   Zero shoot time
Dt     = 0.01;                                                              % [s]   Time step of simulation
Dt_guid = 1;                                                                % [s]   Update sample time of the guidance algorithm
Dt_con = 0.02;                                                              % [s]   Update sample time of the control algorithm
Dt_var= 0.1;
tfin   = 10000;                                                             % [s]   Maximum time of simulation (!can be modified)
cont   = 0;                                                                 % [s]   Index

%--------------------------------------------------------------------------
%   Initial conditions – Free Drift
%--------------------------------------------------------------------------

T_FD = 400;                                                                 %[s] Free Drift Time

Zo        = -(r_c-r_t);
Yo        = 0;
Xo        = -10000-3*0.5*omega*Zo*T_FD;                                    % Xo = -(500+4/omega*DVz1+3*pi/omega*DVx1+3*0.5*omega*Zo*T_FD));

Vxo = 3*omega*Zo/2;
Vyo = 0;
Vzo = 0;

r0        = [Xo Yo Zo];                                                     % [m]        initial position
v0        = [Vxo Vyo Vzo];                                             % [m/s]      initial velocity

q0_0 = 0.5;
qv_0= [0.5 0.5 0.5];
quat0_PH0 = [q0_0, qv_0];

%--------------------------------------------------------------------------
%   Initial conditions – Hohmann Transfer
%--------------------------------------------------------------------------

x0_PH1 = -10000;
y0_PH1 = 0;
z0_PH1 = Zo;

vx0_PH1 = v0(1);
vy0_PH1 = 0;
vz0_PH1 = 0;

r0_p1Id    = [x0_PH1, y0_PH1, z0_PH1];
v0_p1Id    = [vx0_PH1, vy0_PH1, vz0_PH1];

quat0_PH1 = [1, 0, 0, 0];

%--------------------------------------------------------------------------
%   Initial conditions – Radial Boost
%--------------------------------------------------------------------------

x0_PH2 = -3000;                                                             % [m]      X position 
y0_PH2 =  0;                                                                % [m]      Y position 
z0_PH2 =  0;                                                                % [m]      Z position

vx0_PH2 =  0;                                                                 % [m/s]    X speed 
vy0_PH2 =  0;                                                                % [m/s]    Y speed 
vz0_PH2 =  0;                                                               % [m/s]    Z speed

r0_p2Id     =    [x0_PH2 y0_PH2 z0_PH2];
v0_p2Id     = [vx0_PH2 vy0_PH2 vz0_PH2];

quat0_PH2 = [1, 0, 0, 0];

%--------------------------------------------------------------------------
%   Initial conditions – Cone maneuver
%--------------------------------------------------------------------------

Vx_min = 0.01;                                                                % [m/s] Minimum speed of thruster, Vx slide 35 Progetto
Vx_max = 0.15;                                                                % [m/s] Initial speed - first impulse slide 35 Progetto

x0_PH3       = -500;                                                            % [m]      X position 
y0_PH3       = 0;                                                               % [m]      Y position 
z0_PH3       = 0;                                                               % [m]      Z position

vx0_PH3 =  0;                                                                 % [m/s]    X speed 
vy0_PH3 =  0;                                                                % [m/s]    Y speed 
vz0_PH3 =  0;                                                               % [m/s]    Z speed


r0_p3Id    = [x0_PH3 y0_PH3 z0_PH3];
v0_p3Id    = [vx0_PH3 vy0_PH3 vz0_PH3];

quat0_PH3 = [1, 0, 0, 0];

%--------------------------------------------------------------------------
% Final point
%--------------------------------------------------------------------------
xf       = -2;                   % [m]  
yf       = 0;                    % [m]
zf       = 0;                    % [m]

vxf = 0;
vyf = 0;
vzf = 0; 

r_des_fa = [xf yf zf];
v_des_fa = [vxf vyf vzf];

%--------------------------------------------------------------------------    
% Cone section elements
%--------------------------------------------------------------------------    
r1=1;
r2=0.1;
teta=atan((r1-r2)/x0_PH3);

%% Section 1A: Chaser Data 

%------------------------------------------------------------------------
% Chaser
%--------------------------------------------------------------------------
lx   = 0.51;                     
ly   = 0.57;                     
lz   = 0.82;  
mc = 43.8;                                                                  % [Kg] initial mass                  
Jx=(mc*(ly^2+lz^2)/12);          
Jy=(mc*(lz^2+lx^2)/12);       
Jz=(mc*(lx^2+ly^2)/12);

I =[Jx  0   0;                                                              % [kg*m^2]  Inetial tensor
     0  Jy  0;               
     0   0  Jz];

invI=inv(I);
 
%%  Section 1B: Thrusts and Moments due to the thrusters


%--------------------------------------------------------------------------
%   Default thruster specs.
%--------------------------------------------------------------------------

Isp  = 220;                                                                 % [s]     Specific impulse
c    = Isp*g0;                                                              % [m/s]   Dumping speed
Fthr  = 0.5;                                                                % [N]     Maximum thrust
n     = 2;                                                                  % [--]    Number of thrusters (1X+3X) or (3Z+4Z)
Tmax     = n*Fthr;

%------------------------------------------------------------------------
% Reaction Wheels 
%--------------------------------------------------------------------------
U_max_RW = 1e-3;                                                           % [N*m]       RW Maximum torque
omega_0_RW = [0 0 0 0];
tau_RW = 0.25;                                                             % [s]         RW Time constant

%% Section 2: Errors due to external disturbances
% Constant and random errors are considered for the forces.
% Constant error is considered for the moments.
%--------------------------------------------------------------------------
%   Thrust errors due to external disturbances
%--------------------------------------------------------------------------

F_err         = [0.01,0.01,0.01];                                           % [N]  Thrust constant error
F_err_min     = [0,0,0];                                                    % [N]  Error mean value
F_err_var     = [0.00001,0.00001,0.00001];                                  % [N]  Variance of the random error 

Sample_time_F = 1;                                                        % [s]  Sampling time for the thrust 
                                                                            %      error 
%--------------------------------------------------------------------------
%   Constant error for the moment due to external disturbances
%--------------------------------------------------------------------------

M_ext = [0.01,0.01,0.01];                                                   % [N*m]  Moment constant error
%--------------------------------------------------------------------------

%--------------------------------------------------------------------------
%   Thrust due to air drag model
%--------------------------------------------------------------------------

rho = 1e-12;                                                                % [kg/m^3] Air density obtained as medium value for 500 km orbit Fehse                                                              % [m/s]    Orbital velocity
CD  = 2.2;                                                                  % [--]     Drag coefficient for satellite of compact shapes
A   = ly*lz;                                                                % [m^2]    Cross section
F_D = 1/2*rho*CD*A*vc^2;                                                    % [N]      Force due to the drag


%--------------------------------------------------------------------------
%   J2 effect
%--------------------------------------------------------------------------

J2=1.08263e-6;
FJ2_r4=-mc*(3*J2*mu*r_E^2)/2;

%--------------------------------------------------------------------------
%   Time correction constants   
%--------------------------------------------------------------------------

dtx_PH1_corr = 0.30;
dtz_PH2_corr = 0.28;
dtx_PH3_corr = 0.33;


%% Section 3: Maneuvers

%--------------------------------------------------------------------------
%   PHASE 0 - Free Drift
%--------------------------------------------------------------------------

F_PH0 = [0 0 0];

%--------------------------------------------------------------------------
%   PHASE 1 - Hohmann Transfert
%--------------------------------------------------------------------------

Fx_PH1id = Tmax;

DVx1 = omega*Zo/4;
DVx2      = DVx1;

dt_Fx1_PH1id = DVx1*mc/Fx_PH1id;
dt_Fx2_PH1id = dt_Fx1_PH1id;

z_start_Fx2_PH1id = 0.5*(DVx2*(1+dtx_PH1_corr))^2/(Fx_PH1id/mc);

dt_Fx1_PH1 = (1+dtx_PH1_corr)*dt_Fx1_PH1id;
dt_Fx2_PH1 = (1+dtx_PH1_corr)*dt_Fx2_PH1id;

%--------------------------------------------------------------------------
%   PHASE 2 - Radial Boost
%--------------------------------------------------------------------------

Fz_PH2id = Tmax;

dX            = r0_p3Id(1) -r0_p2Id(1);
DVz1          = omega*dX/4;
DVz2      = DVz1;

dt_Fz1_PH2id  = DVz1*mc/Fz_PH2id;
dt_Fz2_PH2id  = dt_Fz1_PH2id;
dt_Fz2_PH2 = (1+dtz_PH2_corr)*dt_Fz2_PH2id;
z_start_Fz2_PH2id = 0.5*(DVz2*(1+dtz_PH2_corr))^2/(Fz_PH2id/mc);
z_start_Fz2_PH2 = 0.5*(DVz2)^2/(Fz_PH2id/mc);


%--------------------------------------------------------------------------
%   PHASE 3 - Final Approach
%--------------------------------------------------------------------------

%%%%%%%%%%%%%%%%% Final approach controller selection %%%%%%%%%%%%%%%%%%%%%
% 1=open loop
% 2=SMC
slct=0;
while slct==0
slct=input(['Select Final-Approach Aontrol Algorithm\n' ...
                  '1 : open loop      \n' ...
                  '2 : SMC              \n' ...
                  'Enter key: ']);
if slct==1
    fa_control=1;
    clc
elseif slct==2
    fa_control=2;
    clc
else 
    clc
  fprintf('++++ WARNING, invalid input values ++++\n')
    slct=0;
end
end
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Straight Line Approach

v_0_fa = v0_p3Id;

Fx_acc=Tmax*sign(Vx_max-v_0_fa(1));    
t_acc_fa_id=abs(Vx_max-v_0_fa(1))/(Fx_acc/mc);

t_acc_fa = (1+dtx_PH3_corr)*t_acc_fa_id;
    
Fx_dec=Tmax*sign(v_des_fa(1)-Vx_max);
t_dec_fa=(v_des_fa(1)-Vx_max)/(Fx_dec/mc);
x_start_dec=r_des_fa(1)-(v_des_fa(1)^2-(Vx_max*(1+dtx_PH3_corr))^2)/(2*(Fx_dec/mc));

% SMC
epsilon_FA=0.005; %0.01;
lambda_FA=0.07;

%% Section 4: Attitude Control
omega_0 = [0 0 0];
omega_des = [0 0 0];
U_max = 0.25;

q0_des = quat0_PH3(1);
qv_des = quat0_PH3(2:end);

% CONTROL PARAMETERS

%PD 4 reaction wheels
d1=0.65;
d2=0.65;
d3=0.65;
K_d=diag([d1,d2,d3]);
alpha =5;
beta = 10;
Id= eye(3);
k=0;

% SMC reaction wheels
lambda=0.06;
epsilon=1e-3;



%% Section 5: Actuators

%--------------------------------------------------------------------------
%   Position
%--------------------------------------------------------------------------

%THRUSTERS PWPF
U_on_pos=1;
U_off_pos=0.60*U_on_pos;
dt_on=0.02;
e_db=0.25;
Km_pos=U_on_pos/e_db;
Tm_pos=-dt_on/(log(1-(U_on_pos-U_off_pos)/Km_pos));
num_pos=Km_pos;
den_pos=[Tm_pos 1];

%--------------------------------------------------------------------------
%   Attitude
%--------------------------------------------------------------------------


%%%%%%%%%%%%%%%%%%%% Attitude Control selection %%%%%%%%%%%%%%%%%%%%%%%%%%%
slct=0;
while slct==0
slct = input(['Select Attitude Control Algorithm\n' ...
                  '1 : PD     \n' ...
                  '2 : SMC    \n' ...
                  'Enter key: ']);     
if slct==1
    control=1;
    clc
elseif slct==2
    control=2;
    clc
else 
    clc
  fprintf('++++ WARNING, invalid input values ++++\n')
    slct=0;
end
end

%REACTION WHEELS  
Z0_RW=[sqrt(3)/2    0           -sqrt(3)/2  0;
   0            sqrt(3)/2   0           -sqrt(3)/2;
   0.5          0.5         0.5         0.5 
   ];
Zinv = pinv(Z0_RW);

%THRUSTERS PWPF
Km=5;  %[Km/(Tm*s+1)]
Tm=0.3899;   % 1/(2*pi*freq_taglio);
U_on=0.3;
U_off=0.85*U_on;
num=Km;
den=[Tm 1];

%% Simulation

run=sim('Simulink_6DoF_RV.slx',T_run);

%% get variables
pos=        run.get('Pos');
vel=        run.get('Vel');    
omega_B=    run.get('omega_B'); 
Mc=         run.get('Mc');
M_RW=       run.get('M_RW_4');
q=          run.get('q'); 
t=          run.get('time');
L=          run.get('L');
start_HN0=   run.get('pos_start_HN');
start_RB0=   run.get('pos_start_RB');
start_FA0=   run.get('pos_start_FA');
phase=      run.get('phase');
F_LVLH=     run.get('F_LVLH');

filename = 'SMC_openloop.mat';
save(filename)
% F_pos_act
% h_RW

%%
Rbar=       pos(:,3);
Vbar=       pos(:,1); 
Vbar_cono=linspace(x0_PH3,r_des_fa(1),100);
Rbar_cono=linspace(r1,r2,100);

PH3=find(phase==3);
PH2_1=find(phase==2);
PH2_2=find(phase==2.5);
PH2=[PH2_1;PH2_2];
PH1_1=find(phase==1);
PH1_2=find(phase==1.5);
PH1=[PH1_1;PH1_2];
PH0=find(phase==0);

i_startHN=find(start_HN0,1);
start_HN=round(start_HN0(i_startHN,:));
t_start_HN=t(i_startHN);

i_startRB=find(start_RB0,1);
start_RB=round(start_RB0(i_startRB,:));
t_start_RB=t(i_startRB);

i_startFA=find(start_FA0,1);
start_FA=round(start_FA0(i_startFA,:));
t_start_FA=t(i_startFA);

end_FA=pos(end,:);

show=0;
clc
while show~=9
show = input([  '--------------------------------------------------------------\n' ...
                '- 1 : print phases initial and final positions        \n' ... 
                '- 2 : position plots                                 \n' ...
                '- 3 : attitude plot                                  \n' ...
                '- 4 : position animation                     \n' ...
                '- 5 : attitude animation                    \n' ...
                '- 9 : EXIT                                           \n' ...
                '\n+++ DO NOT CLOSE plot window until animation is completed +++\n' ...
                '\n Enter key: ']);
clc
close all

if show==1

box=msgbox({sprintf('======================================================');...
sprintf('\nRendez-Vous phases:');...
sprintf('------------------------------------------------------');...
sprintf('0: FREE-DRIFT:\nfrom     [ %g;  %g; %g ] m',round(r0(1)),r0(2),r0(3)) ;...
sprintf('to        [ %g;  %g; %g ] m',start_HN(1),start_HN(2),start_HN(3)) ;...
sprintf('------------------------------------------------------');...
sprintf('1: HOHMANN:\nfrom    [ %g;  %g; %g ] m',start_HN(1),start_HN(2),start_HN(3)) ;...
sprintf('to            [ %g;  %g;   %g ] m',start_RB(1),start_RB(2),start_RB(3)) ;...
sprintf('------------------------------------------------------');...
sprintf('2: RADIAL-BOOST:\nfrom        [ %g;  %g;   %g ] m',start_RB(1),start_RB(2),start_RB(3)) ;...
sprintf('to             [ %g;    %g;    %g ] m',start_FA(1),start_FA(2),start_FA(3)) ;...
sprintf('------------------------------------------------------');...
sprintf('3: FINAL-APPROACH:\nfrom         [ %g;    %g;    %g ] m',start_FA(1),start_FA(2),start_FA(3)) ;...
sprintf('to        [ %.2g;  %.2g;%.2g ] m',end_FA(1),end_FA(2),end_FA(3)) ;...
sprintf('\n======================================================')});...



elseif show==2
% Position plot

% Thrusters impulse Vs. time

figure(8)
tiledlayout(3,1)
nexttile
plot(t,F_LVLH(:,1),'b','LineWidth',.8)
legend('X',Location='southwest')
ylabel('Thrust [N]')
ylim([-1 1])
grid minor
subtitle(sprintf(''))
title('Thrusters impulses during Rendez-Vous (in LVLH)')
nexttile
plot(t,F_LVLH(:,2),'k','LineWidth',.8)
legend('Y',Location='southwest')
ylabel('Thrust [N]')
ylim([-1 1])
grid minor
nexttile
plot(t,F_LVLH(:,3),'r','LineWidth',.01)
legend('Z',Location='southwest')
ylim([-1 1])
xlabel('time [s]')
ylabel('Thrust [N]')
grid minor


% Chaser Velocities plot

figure(7)
hold on
plot(t,vel(:,1),'b','LineWidth',1)
plot(t,vel(:,2),'k','LineWidth',1)
plot(t,vel(:,3),'r','LineWidth',1)
xlabel('time [s]')
ylabel('Velocity [m/s]')
grid minor
title('Chaser''s velocities during Rendez-Vous')
subtitle(sprintf(''))
legend('Vx','Vy','Vz')

%% ZOOM Final Approach Chaser Position Vs. time
figure(6)
hold on
plot(t(PH3),pos(PH3,1),'b','LineWidth',.8)
plot(t(PH3),pos(PH3,2),'k','LineWidth',.8)
plot(t(PH3),pos(PH3,3),'r','LineWidth',.8)
xlabel('time [s]')
ylabel('Position [m]')
grid minor
xlim([t(find(abs(pos(:,1))<=20,1)) inf])
ylim([-16 4])
title('Chaser''s final position')
subtitle(sprintf(''))
legend('X','Y','Z',Location='east')
%%



% Chaser Position Vs. time

figure(5)
hold on
plot(t,pos(:,1),'b','LineWidth',1)
plot(t,pos(:,2),'k','LineWidth',1)
plot(t,pos(:,3),'r','LineWidth',1)
xlabel('time [s]')
ylabel('Position [m]')
grid minor
title('Chaser''s position during Rendez-Vous')
subtitle(sprintf(''))
legend('X','Y','Z')



% ZOOM XZ final approach

figure(4)
tiledlayout(5,1)
nexttile([3 1]);
hold on
plot (0,0,'r.','MarkerSize',30)
plot(Vbar(PH3),Rbar(PH3),'b','LineWidth',.8)
ylabel('R-Bar [m]')
xlabel('V-Bar [m]')
% plot (Vbar(PH3(1)),Rbar(PH3(1)),'bo','LineWidth',.8)
plot (Vbar(end),Rbar(end),'bd','LineWidth',.8)
plot(Vbar_cono,Rbar_cono,'--k',Vbar_cono,-Rbar_cono,'--k')
set(gca,'XDir','reverse')
set(gca,'YDir','reverse')
grid minor
xlim([-500 50])
title('Final-Approach Manoeuvre')
subtitle(sprintf(''))
legend('Target initial position','Chaser motion','Chaser final position')

nexttile([2 1])
hold on
plot (0,0,'r.','MarkerSize',30)
plot(Vbar(PH3),pos(PH3,2),'b','LineWidth',.8)
xlabel('V-Bar [m]')
ylabel('Y [m]')
% plot (Vbar(PH3(1)),pos(PH3(1),2),'bo','LineWidth',.8)
plot (Vbar(end),pos(end,2),'bd','LineWidth',.8)
plot(Vbar_cono,Rbar_cono(end)*ones(1,length(Vbar_cono)),'--k',Vbar_cono,-Rbar_cono(end)*ones(1,length(Vbar_cono)),'--k')
set(gca,'XDir','reverse')
set(gca,'YDir','reverse')
grid minor
xlim([-500 50])
ylim([-0.6 0.6])


% Radial-Boost plot

figure(3)
axis auto
plot(Vbar(PH2),Rbar(PH2),'b','LineWidth',.8)
xlabel('V-Bar [m]')
ylabel('R-Bar [m]')
hold on
plot (0,0,'r.','MarkerSize',30)
plot (Vbar(PH2(1)),Rbar(PH2(1)),'bo','LineWidth',.8)
plot (Vbar(PH2(end)),Rbar(PH2(end)),'bd','LineWidth',.8)
set(gca,'XDir','reverse')
set(gca,'YDir','reverse')
grid minor
xlim([-3000 200])
ylim([-50 600])


title('Radial-Boost Manoeuvre')
subtitle(sprintf(''))
legend('Chaser motion','Target initial position','Chaser initial position','Chaser final position',Location='North')


% Hohmann plot

figure(2)
plot(Vbar(PH1),Rbar(PH1),'b','LineWidth',.8)
xlabel('V-Bar [m]')
ylabel('R-Bar [m]')
hold on
plot (0,0,'r.','MarkerSize',30)
plot (Vbar(PH1(1)),Rbar(PH1(1)),'bo','LineWidth',.8)
plot (Vbar(PH1(end)),Rbar(PH1(end)),'bd','LineWidth',.8)
set(gca,'XDir','reverse')
set(gca,'YDir','reverse')
grid minor
xlim([-12000 500])
ylim([-200 3200])



title('Hohmann Manoeuvre')
subtitle(sprintf(''))
legend('Chaser motion','Target initial position','Chaser initial position','Chaser final position',Location='Northeast')


%LVLH plot

figure(1)
plot(Vbar/1e3,Rbar/1e3,'b','LineWidth',.8)
xlabel('V-Bar [km]')
ylabel('R-Bar [km]')
hold on
plot (0,0,'r.','MarkerSize',30)
plot (Vbar(1)/1e3,Rbar(1)/1e3,'bo','LineWidth',.8)
plot (Vbar(end)/1e3,Rbar(end)/1e3,'bd','LineWidth',.8)
set(gca,'XDir','reverse')
set(gca,'YDir','reverse')
grid minor
title('Rendez-vous maneuvers')
subtitle(sprintf(''))
legend('Chaser motion','Target initial position','Chaser initial position','Chaser final position')
xlim([-12.500 .5])
ylim([-0.2 3.2])



elseif show==3
% Attitude plot

figure(10)
tiledlayout(4,1)

nexttile
plot(t(PH0),M_RW(PH0,1),'b','LineWidth',.8)
legend('RW 1')
ylabel('[Nm]')
grid minor
subtitle(sprintf(''))
title('Reaction wheels torque during free-drift')
xlim([0 T_FD])

nexttile
plot(t(PH0),M_RW(PH0,2),'b','LineWidth',.8)
legend('RW 2')
ylabel('[Nm]')
grid minor
xlim([0 T_FD])

nexttile
plot(t(PH0),M_RW(PH0,3),'b','LineWidth',.8)
legend('RW 3')
ylabel('[Nm]')
grid minor
xlim([0 T_FD])

nexttile
plot(t(PH0),M_RW(PH0,4),'b','LineWidth',.8)
legend('RW 4')
ylabel('[Nm]')
xlabel('time [s]')
grid minor
xlim([0 T_FD])



figure(9)
plot(t(PH0),q(PH0,:))
title('Attitude control during free-drift')
legend('q0','qx','qy','qz',Location='east')
grid on
ylabel('quaternions [-]')
xlabel('time [m]')
ylim([-0.1 1.1])
xlim([0 T_FD])




elseif show==5
% attitude animation
%%%%%
Velocita_animazione=round(2/1e4*length(t));
%%%%%

tplot=t(1:round(i_startHN-Dt*1000*200));

% if fase==3
% x_pos=Vbar;
% y_pos=0*ones(1,length(tplot))';
% z_pos=Rbar;
% else
x_pos=0*ones(1,length(tplot))';
y_pos=0*ones(1,length(tplot))';
z_pos=0*ones(1,length(tplot))';


% cubo
a = -pi : pi/2 : pi;                                % Define Corners
ph = pi/4;                                          % Define Angular Orientation ( Phase )

x_cube = [cos(a+ph); cos(a+ph)]/cos(ph);
y_cube = [sin(a+ph); sin(a+ph)]/sin(ph);
z_cube = [-ones(size(a)); ones(size(a))];


cube=[x_cube(1,:) x_cube(2,:)
      y_cube(1,:) y_cube(2,:)
      z_cube(1,:) z_cube(2,:)];

vec_cube_rot=ones(length(tplot),3); %pre-allocation
cube_rot=ones(3,10,length(tplot));
x_cube_rot=ones(2,5,length(tplot));
y_cube_rot=x_cube_rot;
z_cube_rot=x_cube_rot;

for cont=1:10
    vec_cube=cube(:,cont);
    for k=1:length(tplot)
        vec_cube_rot(k,:)=L(:,:,k)*vec_cube;
        cube_rot(:,cont,k)=vec_cube_rot(k,:)';
    end
end

x_cube_rot(1,1:5,:)=cube_rot(1,1:5,:);
x_cube_rot(2,1:5,:)=cube_rot(1,6:10,:);
y_cube_rot(1,1:5,:)=cube_rot(2,1:5,:);
y_cube_rot(2,1:5,:)=cube_rot(2,6:10,:);
z_cube_rot(1,1:5,:)=cube_rot(3,1:5,:);
z_cube_rot(2,1:5,:)=cube_rot(3,6:10,:);

for k=1:length(tplot)
    for r=1:2
    x_cube_rot(r,:,k)=x_pos(k)+x_cube_rot(r,:,k);
    y_cube_rot(r,:,k)=y_pos(k)+y_cube_rot(r,:,k);
    z_cube_rot(r,:,k)=z_pos(k)+z_cube_rot(r,:,k);
    end
end

%vettore
vec=ones(length(tplot),3);
vec_0(1,:)=[0 0 2];
for k=1:length(tplot)
vec(k,:)=L(:,:,k)*vec_0';
end


%plot animazione
figure();
% axis tight manual % this ensures that getframe() returns a consistent size
% filename = 'attitude.gif';
tiledlayout(1,2)
nexttile
s=surf(x_cube_rot(:,:,1), y_cube_rot(:,:,1), z_cube_rot(:,:,1), 'FaceColor','g')   ;   % Plot Cube
hold on
p=patch(x_cube_rot(:,:,1)', y_cube_rot(:,:,1)', z_cube_rot(:,:,1)','r');     % Make Cube Appear Solid
des_vec=quiver3(x_pos(1),y_pos(1),z_pos(1),vec_0(1,1),vec_0(1,1), ...
    vec_0(1,3),'-r',LineWidth=1.5);           % assetto desiderato
vec_plot=quiver3(x_pos(1),y_pos(1),z_pos(1),vec(1,1),vec(1,1),vec(1,3), ...
    'b',LineWidth=2);
axis equal
xlim([min(x_pos)-2 max(x_pos)+2])
ylim([min(y_pos)-2 max(y_pos)+2])
zlim([min(z_pos)-2 max(z_pos)+2])
xlabel('X axis')
ylabel('Y axis')
zlabel('Z axis')

% set(gca,'XDir','reverse') %allinea assi con LVLH
% set(gca,'ZDir','reverse')

nexttile
hold on
plot(tplot,q(1:length(tplot),:))
ylabel('quaternions [-]')
xlabel('time [s]')
quat_plot=plot([tplot(1) tplot(1)],[1 0],'--');
grid on
title('Attitude control during free-drift')
xlim([0 round(tplot(end))])
legend('q0','qx','qy','qz')


% nexttile
% plot(Vbar/1e3,Rbar/1e3,'b','LineWidth',.8) %chaser motion
% xlabel('V-Bar [km]')
% ylabel('R-Bar [km]')
% hold on
% plot (0,0,'ro','LineWidth',.8) %target initial pos
% plot (Vbar(1)/1e3,Rbar(1)/1e3,'bo','LineWidth',.8) %chaser initial pos
% ch_pos=plot (Vbar(1)/1e3,Rbar(1)/1e3,'bd','LineWidth',.8); %chaser final pos
% plot(Vbar_cono/1e3,Rbar_cono/1e3,':k',Vbar_cono/1e3,-Rbar_cono/1e3,':k')
% set(gca,'XDir','reverse')
% set(gca,'YDir','reverse')
% grid minor
% title('Free-Drift Manouvre')
% subtitle(sprintf('T=%.5g*target period, total drift: x=%dkm',T_run/Period,round(Vbar(length(Vbar))/1000)))
% legend('Chaser motion','Target initial position','Chaser initial position','Chaser final position')
% xlim([Vbar(1)/1e3 0/1e3])
% ylim([(min(Rbar)-2)/1e3 -(min(Rbar)-2)/1e3])
% 
set(gcf,'position',[150,150,1300,500])

%animazione

for cont = 1:15:length(vec)
    des_vec.XData = x_pos(cont);
    des_vec.YData = y_pos(cont);
    des_vec.ZData = z_pos(cont);
    vec_plot.XData = x_pos(cont);
    vec_plot.YData = y_pos(cont);
    vec_plot.ZData = z_pos(cont);
    vec_plot.UData = vec(cont,1);
    vec_plot.VData = vec(cont,2);
    vec_plot.WData = vec(cont,3);
    quat_plot.XData = [tplot(cont) tplot(cont)];
    quat_plot.YData = [1 0];
    s.XData = x_cube_rot(:,:,cont);
    s.YData = y_cube_rot(:,:,cont);
    s.ZData = z_cube_rot(:,:,cont);
    p.XData = x_cube_rot(:,:,cont);
    p.YData = y_cube_rot(:,:,cont);
    p.ZData = z_cube_rot(:,:,cont);
    drawnow
end

elseif show==4
% position animation
hold on
plot(0, 0, '.c', 'MarkerSize',300)   %size 690 to properly scaled Earth

th = linspace(0,2*pi*T_run/Period,length(Vbar));  %[rad] angolo coord. polare

for i=1:length(Vbar)
[x2(i),y2(i)] = pol2cart((th(i))+pi/2,r_t/1e3); 
end
plot(x2, y2,':k');   %target orbit
grid  on

for i=1:length(Vbar)
th_Vbar=atan(Vbar(i)*1000/r_c); %effetto Vbar aumentato di 1000 volte
[x1(i),y1(i)] = pol2cart((th(i)+th_Vbar)+pi/2,(r_t-Rbar(i)*1000)/1e3); %effetto Rbar aumentato di 1000 volte
end
plot(x1(PH0), y1(PH0),'-m');   %chaser orbit
plot(x1(PH1), y1(PH1),'-k');
plot(x1(PH2), y1(PH2),'-r');
plot(x1(PH3), y1(PH3),'-b');
% set(gca,'XTick',[], 'YTick', [])

plot(x1(end),y1(end),'or','MarkerSize',5)
plot(x2(end),y2(end),'ob','MarkerSize',5)
t_pos=plot(x2(1),y2(1),'dk','MarkerSize',12);
c_pos=plot(x1(1),y1(1),'.r','MarkerSize',30);
grid  on
axis equal
xlabel('I axis [km]')
ylabel('J axis [km]')
title('Rendez-vous maneuvers in ECI')
subtitle('Chaser orbit & Earth size not to scale')
legend('','','free-drift','hohmann','radial-boost','final approach')


for cont = 1:300:length(t)
    c_pos.XData = x1(cont);
    c_pos.YData = y1(cont);
    t_pos.XData = x2(cont);
    t_pos.YData = y2(cont);
    drawnow
end

elseif show==9
    close all
    exit=input(['\nAre you sure to Exit?:\n' ...
        '- Y = yes\n' ...
        '- Any other key = no\n' ...
        'Enter key: '],'s');
    if exit=='Y'
        clc
    elseif exit=='y'
        clc
    else 
        show=0;
    end 
else
   
    fprintf('++++ WARNING, invalid input values ++++\n')
    show=0;
end
end






