#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Simulink_6DoF_RV_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "Simulink_6DoF_RV.h"
#include "Simulink_6DoF_RV_capi.h"
#include "Simulink_6DoF_RV_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/Clock" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1
, 0 , TARGET_STRING ( "Simulink_6DoF_RV/ASSETTO/PD 4" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/ASSETTO/SMC" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 }
, { 3 , 0 , TARGET_STRING ( "Simulink_6DoF_RV/ASSETTO/Merge" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/ASSETTO/Rate Transition" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 2 } , { 5 , 4 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT ASSETTO/Coordinate Transformation Conversion" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT POSIZIONE/Matrix Multiply1" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 8 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 9 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Gain3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 10 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Gain4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 11 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Gain5" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 0 } , { 12 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Integrator" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Saturation" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Saturation1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Saturation2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Saturation3" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 2 } , { 18 , 0 , TARGET_STRING ( "Simulink_6DoF_RV/THRUSTERS PWPF/Gain11"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 19 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Gain3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 1 } , { 20 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Gain4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 21 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Gain7" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 1 } , { 22 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Gain8" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 23 , 0 , TARGET_STRING ( "Simulink_6DoF_RV/THRUSTERS PWPF/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Sum2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 1 } , { 25 , 0 , TARGET_STRING ( "Simulink_6DoF_RV/THRUSTERS PWPF/Sum4" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 26 , 1 , TARGET_STRING (
"Simulink_6DoF_RV/ASSETTO/PD 4/Matrix Divide" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 3 } , { 27 , 1 , TARGET_STRING (
"Simulink_6DoF_RV/ASSETTO/PD 4/Sign" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 3 } , { 28 , 0 , TARGET_STRING ( "Simulink_6DoF_RV/ASSETTO/PD 4/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 29 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/External Distrurbances/Drag/Gain" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 3 } , { 30 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT ASSETTO/Eq. eulero/Gain" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT ASSETTO/Eq. eulero/Integrator" ) , TARGET_STRING (
"omega_B" ) , 0 , 0 , 1 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT ASSETTO/quaternioni/Gain" ) , TARGET_STRING (
"-1/2*omega_B*q" ) , 0 , 0 , 0 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT ASSETTO/quaternioni/Gain1" ) , TARGET_STRING (
"1/2*(q0*omega_B-omega_B x qv)" ) , 0 , 0 , 1 , 0 , 0 } , { 34 , 0 ,
TARGET_STRING ( "Simulink_6DoF_RV/PLANT ASSETTO/quaternioni/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT ASSETTO/quaternioni/Integrator1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/Pos_y" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/Vel_x" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/Vel_y" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/Vel_z" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/pos_x" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/pos_z" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/Sum" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/Sum1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/Sum2" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Rate Transition" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 4 } , { 46 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Add1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Max" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 48 , 11 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Hohmann/HN 1st & 2nd impulse"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 50 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Hohmann/If Action Subsystem2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 51 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Hohmann/Merge" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 52 , 0 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/If Action Subsystem2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/RB 1st impulse"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/Merge" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Cast To Double" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/OR1" ) , TARGET_STRING ( "" )
, 0 , 1 , 0 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Cast To Double2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Relational Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem2/Cast To Double1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem2/Relational Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 62 , 26 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/fire-time calculator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 5 } , { 63 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/Cast To Double" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/Relational Operator2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 65 , 11 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA SMC"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 66 , 11 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 67 , 11 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/Merge"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Hohmann/HN 1st & 2nd impulse/IC"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 69 , 0 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Hohmann/If Action Subsystem2/IC"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 70 , 15 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 71 , 0 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/If Action Subsystem2/IC"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/Subsystem/AND"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/Subsystem/AND1"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 0 } , { 74 , 18 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Subsystem/Triggered Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 75 , 18 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Subsystem/Triggered Subsystem1"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 5 } , { 76 , 19 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Subsystem/Triggered Subsystem2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 77 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Subsystem/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 78 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/end RB PID/Delay One Step" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 79 , 20 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Subsystem/Triggered Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 80 , 21 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Subsystem/Triggered Subsystem2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 81 , 21 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Subsystem/Triggered Subsystem2"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 5 } , { 82 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Subsystem/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 83 , 22 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem2/Subsystem/Triggered Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 84 , 23 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem2/Subsystem/Triggered Subsystem2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 85 , 0 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem2/Subsystem/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 86 , 24 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/Subsystem/Triggered Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 87 , 25 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/Subsystem/Triggered Subsystem3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 88 , 26 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/fire-time calculator/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 5 } , { 89 , 5 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA SMC/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 90 , 11 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 91 , 15 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Pos z y/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 92 , 18 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Subsystem/Triggered Subsystem1/Vel"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 93 , 18 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Subsystem/Triggered Subsystem1/Pos"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 94 , 19 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Subsystem/Triggered Subsystem2/Vel"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 95 , 20 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Subsystem/Triggered Subsystem1/Vel"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 96 , 21 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Subsystem/Triggered Subsystem2/Pos"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 97 , 21 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Subsystem/Triggered Subsystem2/Vel"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 98 , 22 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem2/Subsystem/Triggered Subsystem1/Vel"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 99 , 23 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem2/Subsystem/Triggered Subsystem2/Vel"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 100 , 24 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/Subsystem/Triggered Subsystem1/Vel"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 101 , 25 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/Subsystem/Triggered Subsystem3/Pos"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 102 , 10 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/ accelerazione"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 103 , 10 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/If Action Subsystem"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 104 , 10 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/PD decelerazione"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 105 , 10 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/Merge"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 106 , 10 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/PID y & z control/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 107 , 10 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/PD decelerazione/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 108 , 9 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/PD decelerazione/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 109 , 10 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/Subsystem/Cast To Double2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 110 , 10 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/Subsystem/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 111 , TARGET_STRING (
"Simulink_6DoF_RV/ASSETTO/Merge" ) , TARGET_STRING ( "InitialOutput" ) , 0 ,
0 , 0 } , { 112 , TARGET_STRING ( "Simulink_6DoF_RV/REACTION WHEELS/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 113 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Gain2" ) , TARGET_STRING ( "Gain" ) , 0 , 0
, 0 } , { 114 , TARGET_STRING ( "Simulink_6DoF_RV/REACTION WHEELS/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 115 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Gain4" ) , TARGET_STRING ( "Gain" ) , 0 , 0
, 0 } , { 116 , TARGET_STRING ( "Simulink_6DoF_RV/REACTION WHEELS/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 117 ,
TARGET_STRING ( "Simulink_6DoF_RV/REACTION WHEELS/Transfer Fcn" ) ,
TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 118 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Transfer Fcn" ) , TARGET_STRING ( "C" ) , 0
, 0 , 0 } , { 119 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Transfer Fcn1" ) , TARGET_STRING ( "A" ) ,
0 , 0 , 0 } , { 120 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Transfer Fcn1" ) , TARGET_STRING ( "C" ) ,
0 , 0 , 0 } , { 121 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Transfer Fcn2" ) , TARGET_STRING ( "A" ) ,
0 , 0 , 0 } , { 122 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Transfer Fcn2" ) , TARGET_STRING ( "C" ) ,
0 , 0 , 0 } , { 123 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Transfer Fcn3" ) , TARGET_STRING ( "A" ) ,
0 , 0 , 0 } , { 124 , TARGET_STRING (
"Simulink_6DoF_RV/REACTION WHEELS/Transfer Fcn3" ) , TARGET_STRING ( "C" ) ,
0 , 0 , 0 } , { 125 , TARGET_STRING ( "Simulink_6DoF_RV/THRUSTERS PWPF/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 126 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Gain10" ) , TARGET_STRING ( "Gain" ) , 0 , 0
, 0 } , { 127 , TARGET_STRING ( "Simulink_6DoF_RV/THRUSTERS PWPF/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 128 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Gain5" ) , TARGET_STRING ( "Gain" ) , 0 , 0
, 0 } , { 129 , TARGET_STRING ( "Simulink_6DoF_RV/THRUSTERS PWPF/Gain6" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 130 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Gain9" ) , TARGET_STRING ( "Gain" ) , 0 , 0
, 0 } , { 131 , TARGET_STRING ( "Simulink_6DoF_RV/THRUSTERS PWPF/Relay" ) ,
TARGET_STRING ( "OnOutputValue" ) , 0 , 0 , 0 } , { 132 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Relay" ) , TARGET_STRING ( "OffOutputValue"
) , 0 , 0 , 0 } , { 133 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Relay1" ) , TARGET_STRING ( "OnOutputValue"
) , 0 , 0 , 0 } , { 134 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Relay1" ) , TARGET_STRING ( "OffOutputValue"
) , 0 , 0 , 0 } , { 135 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Relay2" ) , TARGET_STRING ( "OnOutputValue"
) , 0 , 0 , 0 } , { 136 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Relay2" ) , TARGET_STRING ( "OffOutputValue"
) , 0 , 0 , 0 } , { 137 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Relay3" ) , TARGET_STRING ( "OnOutputValue"
) , 0 , 0 , 0 } , { 138 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Relay3" ) , TARGET_STRING ( "OffOutputValue"
) , 0 , 0 , 0 } , { 139 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Relay4" ) , TARGET_STRING ( "OnOutputValue"
) , 0 , 0 , 0 } , { 140 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Relay4" ) , TARGET_STRING ( "OffOutputValue"
) , 0 , 0 , 0 } , { 141 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Relay5" ) , TARGET_STRING ( "OnOutputValue"
) , 0 , 0 , 0 } , { 142 , TARGET_STRING (
"Simulink_6DoF_RV/THRUSTERS PWPF/Relay5" ) , TARGET_STRING ( "OffOutputValue"
) , 0 , 0 , 0 } , { 143 , TARGET_STRING (
"Simulink_6DoF_RV/ASSETTO/PD 4/Constant2" ) , TARGET_STRING ( "Value" ) , 0 ,
0 , 0 } , { 144 , TARGET_STRING ( "Simulink_6DoF_RV/ASSETTO/PD 4/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 145 , TARGET_STRING (
"Simulink_6DoF_RV/ASSETTO/PD 4/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 1 ,
0 } , { 146 , TARGET_STRING ( "Simulink_6DoF_RV/ASSETTO/SMC/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 147 , TARGET_STRING (
"Simulink_6DoF_RV/ASSETTO/SMC/Constant1" ) , TARGET_STRING ( "Value" ) , 0 ,
3 , 0 } , { 148 , TARGET_STRING (
"Simulink_6DoF_RV/External Distrurbances/Drag/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 149 , TARGET_STRING (
"Simulink_6DoF_RV/External Distrurbances/Gravity Gradient/ " ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 150 , TARGET_STRING (
"Simulink_6DoF_RV/External Distrurbances/Gravity Gradient/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 151 , TARGET_STRING (
"Simulink_6DoF_RV/External Distrurbances/J2/Constant3" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 152 , TARGET_STRING (
"Simulink_6DoF_RV/External Distrurbances/J2/Gain" ) , TARGET_STRING ( "Gain"
) , 0 , 4 , 0 } , { 153 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT ASSETTO/quaternioni/Gain" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 154 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT ASSETTO/quaternioni/Gain1" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 155 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/Gain2" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 156 , TARGET_STRING (
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/Gain3" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 157 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Gain" ) , TARGET_STRING ( "Gain" ) , 2
, 0 , 1 } , { 158 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Multiply" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 159 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Multiply1" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 160 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Multiply2" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 161 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Multiply3" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 162 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Free Drift/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 163 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Constant1" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 164 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Constant2" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 165 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Integrator" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 166 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Constant2" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 167 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 168 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem2/Constant2" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 169 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem2/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 170 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/Constant4" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 171 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 172 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/Merge"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 173 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Hohmann/HN 1st & 2nd impulse/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 174 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Hohmann/HN 1st & 2nd impulse/IC"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 175 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Hohmann/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 176 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Hohmann/If Action Subsystem2/IC"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 177 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Hohmann/Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 178 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Hohmann/Subsystem/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 179 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/If Action Subsystem2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 180 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/If Action Subsystem2/IC"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 181 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/RB 1st impulse/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 182 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 183 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/Subsystem/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 184 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/end RB PID/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 185 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/end RB PID/Constant6" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 186 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/end RB PID/Delay One Step" )
, TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 187 , TARGET_STRING
(
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/fire-time calculator/dt_PH2_1"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 188 , TARGET_STRING (
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/fire-time calculator/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 189 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA SMC/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 190 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA SMC/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 191 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Pos z y/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 192 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Pos z y/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 193 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Pos z y/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 194 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Pos z y/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 195 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Pos z y/Gain4"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 196 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Pos z y/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 197 ,
TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Vel x/Gain5"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 198 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Vel x/Gain8"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 199 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Vel x/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 200 ,
TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Subsystem/Triggered Subsystem1/V_fin"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 201 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Subsystem/Triggered Subsystem1/start_FA"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 202 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Subsystem/Triggered Subsystem2/V_in"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 203 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Subsystem/Triggered Subsystem1/V_fin"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 204 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Subsystem/Triggered Subsystem2/V_in"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 205 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Subsystem/Triggered Subsystem2/Pos_HN_start"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 206 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem2/Subsystem/Triggered Subsystem1/V_fin"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 207 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem2/Subsystem/Triggered Subsystem2/V_in"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 208 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/Subsystem/Triggered Subsystem1/V_fin"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 209 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/Subsystem/Triggered Subsystem3/Pos_RB_start"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 210 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 211 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/PID y & z control/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 212 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/PID y & z control/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 213 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/PID y & z control/Gain4"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 214 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/PID y & z control/Gain5"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 215 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/PID y & z control/Gain6"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 216 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/PID y & z control/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 217 ,
TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 218 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/PD decelerazione/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 219 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/PD decelerazione/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 220 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/PD decelerazione/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 221 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/PD decelerazione/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 222 ,
TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/Subsystem/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 223 , TARGET_STRING (
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA straight line/Fx control/Subsystem/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ;
static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] =
{ { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 224 , TARGET_STRING (
"FJ2_r4" ) , 0 , 0 , 0 } , { 225 , TARGET_STRING ( "F_D" ) , 0 , 0 , 0 } , {
226 , TARGET_STRING ( "I" ) , 0 , 2 , 0 } , { 227 , TARGET_STRING ( "K_d" ) ,
0 , 2 , 0 } , { 228 , TARGET_STRING ( "Tmax" ) , 0 , 0 , 0 } , { 229 ,
TARGET_STRING ( "U_max_RW" ) , 0 , 0 , 0 } , { 230 , TARGET_STRING (
"U_off_pos" ) , 0 , 0 , 0 } , { 231 , TARGET_STRING ( "U_on_pos" ) , 0 , 0 ,
0 } , { 232 , TARGET_STRING ( "Vx_max" ) , 0 , 0 , 0 } , { 233 ,
TARGET_STRING ( "Z0_RW" ) , 0 , 6 , 0 } , { 234 , TARGET_STRING ( "Zinv" ) ,
0 , 7 , 0 } , { 235 , TARGET_STRING ( "alpha" ) , 0 , 0 , 0 } , { 236 ,
TARGET_STRING ( "beta" ) , 0 , 0 , 0 } , { 237 , TARGET_STRING ( "control" )
, 0 , 0 , 0 } , { 238 , TARGET_STRING ( "den_pos" ) , 0 , 3 , 0 } , { 239 ,
TARGET_STRING ( "dt_Fx1_PH1" ) , 0 , 0 , 0 } , { 240 , TARGET_STRING (
"fa_control" ) , 0 , 0 , 0 } , { 241 , TARGET_STRING ( "invI" ) , 0 , 2 , 0 }
, { 242 , TARGET_STRING ( "mc" ) , 0 , 0 , 0 } , { 243 , TARGET_STRING ( "mu"
) , 0 , 0 , 0 } , { 244 , TARGET_STRING ( "num_pos" ) , 0 , 0 , 0 } , { 245 ,
TARGET_STRING ( "omega" ) , 0 , 0 , 0 } , { 246 , TARGET_STRING ( "omega_0" )
, 0 , 4 , 0 } , { 247 , TARGET_STRING ( "q0_0" ) , 0 , 0 , 0 } , { 248 ,
TARGET_STRING ( "q0_des" ) , 0 , 0 , 0 } , { 249 , TARGET_STRING ( "qv_0" ) ,
0 , 4 , 0 } , { 250 , TARGET_STRING ( "r0" ) , 0 , 4 , 0 } , { 251 ,
TARGET_STRING ( "r0_p1Id" ) , 0 , 4 , 0 } , { 252 , TARGET_STRING (
"r_des_fa" ) , 0 , 4 , 0 } , { 253 , TARGET_STRING ( "r_t" ) , 0 , 0 , 0 } ,
{ 254 , TARGET_STRING ( "t_acc_fa" ) , 0 , 0 , 0 } , { 255 , TARGET_STRING (
"v0" ) , 0 , 4 , 0 } , { 256 , TARGET_STRING ( "v_des_fa" ) , 0 , 4 , 0 } , {
257 , TARGET_STRING ( "x0_PH2" ) , 0 , 0 , 0 } , { 258 , TARGET_STRING (
"x0_PH3" ) , 0 , 0 , 0 } , { 259 , TARGET_STRING ( "x_start_dec" ) , 0 , 0 ,
0 } , { 260 , TARGET_STRING ( "xf" ) , 0 , 0 , 0 } , { 261 , TARGET_STRING (
"z_start_Fx2_PH1id" ) , 0 , 0 , 0 } , { 262 , TARGET_STRING (
"z_start_Fz2_PH2id" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ki3h340w2w , & rtB . jeiao0vue1 [
0 ] , & rtB . jeiao0vue1 [ 0 ] , & rtB . jeiao0vue1 [ 0 ] , & rtB .
ituo4cjnxl [ 0 ] , & rtB . aawzji5g0h [ 0 ] , & rtB . n5iekj0nsu [ 0 ] , &
rtB . irwem5yeaq , & rtB . mabmgihsnd , & rtB . a4fhdaeryk , & rtB .
fjbxch0dig , & rtB . gtilgu5sle [ 0 ] , & rtB . otvc3thwzj [ 0 ] , & rtB .
hefr5ndy1s , & rtB . nfrnyxu4q1 , & rtB . pfifbx3mae , & rtB . pahzbctuiu , &
rtB . jtngbjl3ja , & rtB . jerw4glkjf , & rtB . nxy0ancgi2 , & rtB .
gjgctmesjj , & rtB . omuqgegu33 , & rtB . lleqa5mxxo , & rtB . mv4f242ju1 , &
rtB . j1u5mmksou , & rtB . ac1wbfy433 , & rtB . p5wqmbc4jk [ 0 ] , & rtB .
nm5geycoyr , & rtB . jeiao0vue1 [ 0 ] , & rtB . jk5fp1pkk1 [ 0 ] , & rtB .
ay20p5emux [ 0 ] , & rtB . nyh5k3mpjz [ 0 ] , & rtB . bhmplnjiqo , & rtB .
lf0heeyhqb [ 0 ] , & rtB . g2ic42jckq , & rtB . d1v2bd51lt [ 0 ] , & rtB .
bxdnivtaee , & rtB . ngmy3naosv , & rtB . ne431czr4g , & rtB . hq22sz5nlo , &
rtB . dnw2ogces4 , & rtB . itazgvg5vs , & rtB . hj5uunkpfr , & rtB .
ct3g5c4k2v , & rtB . lhkxddx2er , & rtB . dqejbdzsd2 [ 0 ] , & rtB .
jwfwy4yjci [ 0 ] , & rtB . dwocx2mznt , & rtB . ny0ldygyvq [ 0 ] , & rtB .
gqmnf1wmhg [ 0 ] , & rtB . gqmnf1wmhg [ 0 ] , & rtB . gqmnf1wmhg [ 0 ] , &
rtB . hyohzjd1mz [ 0 ] , & rtB . hyohzjd1mz [ 0 ] , & rtB . hyohzjd1mz [ 0 ]
, & rtB . hyohzjd1mz [ 0 ] , & rtB . jrget4nbxe , & rtB . aau4j2zfrw , & rtB
. msccedbjem , & rtB . aqehawlayk , & rtB . fbu1x4wjkn , & rtB . blphcp4v05 ,
& rtB . n3nqejdod4 , & rtB . eslg1shpjg , & rtB . c51vwh2njw , & rtB .
ny0ldygyvq [ 0 ] , & rtB . ny0ldygyvq [ 0 ] , & rtB . ny0ldygyvq [ 0 ] , &
rtB . gqmnf1wmhg [ 0 ] , & rtB . gqmnf1wmhg [ 0 ] , & rtB . nzugy1td30 [ 0 ]
, & rtB . hyohzjd1mz [ 0 ] , & rtB . nmajnn4oia , & rtB . ovntti0e41 , & rtB
. k5pnmgii3x [ 0 ] , & rtB . ivzzalfydq [ 0 ] , & rtB . dshipp4zhkp .
bf4wrveec1 [ 0 ] , & rtB . dmedwv4xxx [ 0 ] , & rtB . ib0mnrovu0 , & rtB .
ccf5xwtinim . eioznmeone [ 0 ] , & rtB . amkjg3fw0e [ 0 ] , & rtB .
baetwki0hc [ 0 ] , & rtB . gj0wyz4siq [ 0 ] , & rtB . cxfwoerhvl . eioznmeone
[ 0 ] , & rtB . k4jqdwwenf . bf4wrveec1 [ 0 ] , & rtB . pstrw1koj3 [ 0 ] , &
rtB . kllc0kyxz3 [ 0 ] , & rtB . jp5jusavom [ 0 ] , & rtB . n3nqejdod4 , &
rtB . iz5r5xtklp [ 0 ] , & rtB . ny0ldygyvq [ 0 ] , & rtB . iayt0jus2n [ 0 ]
, & rtB . k5pnmgii3x [ 0 ] , & rtB . ivzzalfydq [ 0 ] , & rtB . dshipp4zhkp .
bf4wrveec1 [ 0 ] , & rtB . ccf5xwtinim . eioznmeone [ 0 ] , & rtB .
baetwki0hc [ 0 ] , & rtB . amkjg3fw0e [ 0 ] , & rtB . cxfwoerhvl . eioznmeone
[ 0 ] , & rtB . k4jqdwwenf . bf4wrveec1 [ 0 ] , & rtB . kllc0kyxz3 [ 0 ] , &
rtB . jp5jusavom [ 0 ] , & rtB . gdd05xxr4o , & rtB . gdd05xxr4o , & rtB .
gdd05xxr4o , & rtB . gdd05xxr4o , & rtB . ami4tmme4t [ 0 ] , & rtB .
gdd05xxr4o , & rtB . bo5hahfv2q , & rtB . oldgnpofph , & rtB . gxcw523rog , &
rtP . Merge_InitialOutput_hiywfoi5ir , & rtP . Gain1_Gain_bfynfmcz2f , & rtP
. Gain2_Gain_ae0zhht53r , & rtP . Gain3_Gain_hnzra1mcif , & rtP .
Gain4_Gain_acmismgbcw , & rtP . Integrator_IC_eclnkc0pcv , & rtP .
TransferFcn_A , & rtP . TransferFcn_C , & rtP . TransferFcn1_A , & rtP .
TransferFcn1_C , & rtP . TransferFcn2_A , & rtP . TransferFcn2_C , & rtP .
TransferFcn3_A , & rtP . TransferFcn3_C , & rtP . Gain1_Gain_htkbkalhuk , &
rtP . Gain10_Gain , & rtP . Gain2_Gain_b5ows0gery , & rtP .
Gain5_Gain_fhub2uxipx , & rtP . Gain6_Gain_hjqmux1g1x , & rtP . Gain9_Gain ,
& rtP . Relay_YOn , & rtP . Relay_YOff , & rtP . Relay1_YOn , & rtP .
Relay1_YOff , & rtP . Relay2_YOn , & rtP . Relay2_YOff , & rtP . Relay3_YOn ,
& rtP . Relay3_YOff , & rtP . Relay4_YOn , & rtP . Relay4_YOff , & rtP .
Relay5_YOn , & rtP . Relay5_YOff , & rtP . Constant2_Value , & rtP .
Gain_Gain [ 0 ] , & rtP . Gain1_Gain [ 0 ] , & rtP . Constant_Value [ 0 ] , &
rtP . Constant1_Value [ 0 ] , & rtP . Gain_Gain_ccmvafsk2y [ 0 ] , & rtP .
_Value [ 0 ] , & rtP . Constant3_Value , & rtP . Constant3_Value_jmxjgvexfd ,
& rtP . Gain_Gain_ctaqewu5jz [ 0 ] , & rtP . Gain_Gain_edw1uflm0w , & rtP .
Gain1_Gain_cpvnkp1afm , & rtP . Gain2_Gain_ojezup1lbz , & rtP .
Gain3_Gain_prsrammgq2 , & rtP . Gain_Gain_nn0z0a2s0s , & rtP . Multiply_Gain
, & rtP . Multiply1_Gain , & rtP . Multiply2_Gain , & rtP . Multiply3_Gain ,
& rtP . Constant_Value_hb2kygv40x [ 0 ] , & rtP . Constant1_Value_b3b2ibebgt
, & rtP . Constant2_Value_lasuau2omr , & rtP . Integrator_IC_hgjgntvn4b , &
rtP . Constant2_Value_gzezhgiiva , & rtP . Integrator_IC_h4ihxe4npk , & rtP .
Constant2_Value_oh1vd01gq3 , & rtP . Integrator_IC_agcff5drih , & rtP .
Constant4_Value , & rtP . Integrator_IC_ao15ude1hl , & rtP .
Merge_InitialOutput , & rtP . Constant_Value_ddfuos2pe2 [ 0 ] , & rtP .
IC_Value [ 0 ] , & rtP . eajtmfyznlk . Constant_Value [ 0 ] , & rtP .
eajtmfyznlk . IC_Value [ 0 ] , & rtP . Constant_Value_anaamreu4b , & rtP .
Constant1_Value_epzvrriq3n , & rtP . dc1zceqmvb . Constant_Value [ 0 ] , &
rtP . dc1zceqmvb . IC_Value [ 0 ] , & rtP . Constant_Value_m3ywocr5li [ 0 ] ,
& rtP . Constant_Value_d4v3rlerh4 , & rtP . Constant1_Value_gjp2xt1hsz , &
rtP . Constant1_Value_pi1m4d02hn , & rtP . Constant6_Value , & rtP .
DelayOneStep_InitialCondition , & rtP . dt_PH2_1_Y0 , & rtP .
Constant_Value_kvy1ybkwso [ 0 ] , & rtP . Constant1_Value_f2h5tnp2xf [ 0 ] ,
& rtP . Constant2_Value_f5jgk2qlyk [ 0 ] , & rtP . Gain_Gain_prfefcrmmw , &
rtP . Gain1_Gain_gq54yvmi0s , & rtP . Gain2_Gain_mpjajviz45 , & rtP .
Gain3_Gain [ 0 ] , & rtP . Gain4_Gain_blfbm01fzo [ 0 ] , & rtP .
Integrator_IC_prjknul2hl , & rtP . Gain5_Gain_mqtmq5anns [ 0 ] , & rtP .
Gain8_Gain [ 0 ] , & rtP . Integrator1_IC , & rtP . V_fin_Y0 , & rtP .
start_FA_Y0 , & rtP . dshipp4zhkp . V_in_Y0 , & rtP . ccf5xwtinim . V_fin_Y0
, & rtP . V_in_Y0 , & rtP . Pos_HN_start_Y0 , & rtP . cxfwoerhvl . V_fin_Y0 ,
& rtP . k4jqdwwenf . V_in_Y0 , & rtP . V_fin_Y0_blxh2icltu , & rtP .
Pos_RB_start_Y0 , & rtP . Gain1_Gain_afxu42ye3m [ 0 ] , & rtP .
Gain_Gain_ijakj545mn [ 0 ] , & rtP . Gain1_Gain_biljuf3k5o [ 0 ] , & rtP .
Gain4_Gain , & rtP . Gain5_Gain , & rtP . Gain6_Gain , & rtP .
Integrator_IC_ljrtrdz11x , & rtP . Constant_Value_akmtssrtai , & rtP .
Gain_Gain_cq40qfuggu , & rtP . Gain1_Gain_ccpd1tkjyt , & rtP . Gain2_Gain , &
rtP . Integrator_IC , & rtP . Constant1_Value_bi1r30sqhu , & rtP .
Integrator_IC_ctraww5gqx , & rtP . FJ2_r4 , & rtP . F_D , & rtP . I [ 0 ] , &
rtP . K_d [ 0 ] , & rtP . Tmax , & rtP . U_max_RW , & rtP . U_off_pos , & rtP
. U_on_pos , & rtP . Vx_max , & rtP . Z0_RW [ 0 ] , & rtP . Zinv [ 0 ] , &
rtP . alpha , & rtP . beta , & rtP . control , & rtP . den_pos [ 0 ] , & rtP
. dt_Fx1_PH1 , & rtP . fa_control , & rtP . invI [ 0 ] , & rtP . mc , & rtP .
mu , & rtP . num_pos , & rtP . omega , & rtP . omega_0 [ 0 ] , & rtP . q0_0 ,
& rtP . q0_des , & rtP . qv_0 [ 0 ] , & rtP . r0 [ 0 ] , & rtP . r0_p1Id [ 0
] , & rtP . r_des_fa [ 0 ] , & rtP . r_t , & rtP . t_acc_fa , & rtP . v0 [ 0
] , & rtP . v_des_fa [ 0 ] , & rtP . x0_PH2 , & rtP . x0_PH3 , & rtP .
x_start_dec , & rtP . xf , & rtP . z_start_Fx2_PH1id , & rtP .
z_start_Fz2_PH2id , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) }
;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } , { "unsigned char" , "uint8_T" , 0 , 0 , sizeof (
uint8_T ) , ( uint8_T ) SS_UINT8 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 12 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 14 , 2
, 0 } } ; static const uint_T rtDimensionArray [ ] = { 1 , 1 , 3 , 1 , 3 , 3
, 1 , 2 , 1 , 3 , 1 , 5 , 3 , 4 , 4 , 3 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 0.01 , 0.02 , 1.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , { ( const void * ) &
rtcapiStoredFloats [ 3 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
rtwCAPI_FIX_UNIFORM_SCALING , 8 , - 6 , ( boolean_T ) 0 } } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 1 , ( uint8_T ) 0
} , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 2 , ( uint8_T ) 0 } , { ( NULL ) , (
NULL ) , 5 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 3 ] , ( const
void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 4 , ( uint8_T ) 0 } , { (
NULL ) , ( NULL ) , - 1 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 111 , rtRootInputs , 0 , rtRootOutputs , 0 }
, { rtBlockParameters , 113 , rtModelParameters , 39 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 4003974170U , 3916963272U , 2956464334U ,
1460834178U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * Simulink_6DoF_RV_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Simulink_6DoF_RV_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( (
* rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Simulink_6DoF_RV_host_InitializeDataMapInfo (
Simulink_6DoF_RV_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
