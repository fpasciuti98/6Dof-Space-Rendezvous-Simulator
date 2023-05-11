#ifndef RTW_HEADER_Simulink_6DoF_RV_h_
#define RTW_HEADER_Simulink_6DoF_RV_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Simulink_6DoF_RV_COMMON_INCLUDES_
#define Simulink_6DoF_RV_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Simulink_6DoF_RV_types.h"
#include "multiword_types.h"
#include "rt_zcfcn.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Simulink_6DoF_RV
#define NSAMPLE_TIMES (6) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (87) 
#define NUM_ZC_EVENTS (9) 
#ifndef NCSTATES
#define NCSTATES (38)   
#elif NCSTATES != 38
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { int8_T f0bl5viy3f ; boolean_T nlwa32a5p1 ; } nflggx2yoy ;
typedef struct { real_T bf4wrveec1 [ 3 ] ; } e1y4svy2rs ; typedef struct {
int8_T hjmucl1u2i ; } oytgsq0e1a ; typedef struct { ZCSigState pfhwdxfwiq ; }
lvkn0hzrdd ; typedef struct { real_T eioznmeone [ 3 ] ; } fevzj2naqh ;
typedef struct { int8_T kc3n40mg45 ; } l3fakxktgq ; typedef struct {
ZCSigState evmjwlgigm ; } im5tdfbqfr ; typedef struct { real_T nyh5k3mpjz [ 3
] ; real_T d1v2bd51lt [ 3 ] ; real_T jeiao0vue1 [ 3 ] ; real_T ituo4cjnxl [ 3
] ; real_T g2ic42jckq ; real_T itazgvg5vs ; real_T molhlnljlf [ 4 ] ; real_T
otvc3thwzj [ 3 ] ; real_T hefr5ndy1s ; real_T nfrnyxu4q1 ; real_T pfifbx3mae
; real_T pahzbctuiu ; real_T gtilgu5sle [ 3 ] ; real_T ay20p5emux [ 3 ] ;
real_T bhmplnjiqo ; real_T lf0heeyhqb [ 3 ] ; real_T dnw2ogces4 ; real_T
bxdnivtaee ; real_T molhlnljlfi [ 3 ] ; real_T ngmy3naosv ; real_T ne431czr4g
; real_T hq22sz5nlo ; real_T c0sejfkafv [ 3 ] ; real_T nxy0ancgi2 ; real_T
omuqgegu33 ; real_T jerw4glkjf ; real_T n5iekj0nsu [ 3 ] ; real_T hj5uunkpfr
; real_T ct3g5c4k2v ; real_T lhkxddx2er ; real_T msccedbjem ; real_T
fbu1x4wjkn ; real_T eslg1shpjg ; real_T jrget4nbxe ; real_T ib0mnrovu0 ;
real_T dwocx2mznt ; real_T gqmnf1wmhg [ 3 ] ; real_T jwfwy4yjci [ 3 ] ;
real_T dqejbdzsd2 [ 3 ] ; real_T dmedwv4xxx [ 3 ] ; real_T gj0wyz4siq [ 3 ] ;
real_T pstrw1koj3 [ 3 ] ; real_T njc2k5n4x2 [ 4 ] ; real_T irwem5yeaq ;
real_T mabmgihsnd ; real_T a4fhdaeryk ; real_T fjbxch0dig ; real_T amiz1f005p
[ 3 ] ; real_T jtngbjl3ja ; real_T gjgctmesjj ; real_T lleqa5mxxo ; real_T
mv4f242ju1 ; real_T j1u5mmksou ; real_T ac1wbfy433 ; real_T ki3h340w2w ;
real_T jk5fp1pkk1 [ 3 ] ; real_T n3nqejdod4 ; real_T jp5jusavom [ 3 ] ;
real_T kllc0kyxz3 [ 3 ] ; real_T amkjg3fw0e [ 3 ] ; real_T baetwki0hc [ 3 ] ;
real_T k5pnmgii3x [ 3 ] ; real_T ivzzalfydq [ 3 ] ; real_T iayt0jus2n [ 3 ] ;
real_T cxvazbfrvw [ 3 ] ; real_T nzugy1td30 [ 3 ] ; real_T ny0ldygyvq [ 3 ] ;
real_T iz5r5xtklp [ 3 ] ; real_T gxcw523rog ; real_T oldgnpofph ; real_T
gdd05xxr4o ; real_T ami4tmme4t [ 3 ] ; real_T bo5hahfv2q ; real_T aawzji5g0h
[ 9 ] ; real_T p5wqmbc4jk [ 3 ] ; real_T nm5geycoyr ; real_T hyohzjd1mz [ 3 ]
; boolean_T aqehawlayk ; boolean_T blphcp4v05 ; boolean_T c51vwh2njw ;
boolean_T aau4j2zfrw ; boolean_T nmajnn4oia ; boolean_T ovntti0e41 ;
e1y4svy2rs k4jqdwwenf ; fevzj2naqh cxfwoerhvl ; fevzj2naqh ccf5xwtinim ;
e1y4svy2rs dshipp4zhkp ; } B ; typedef struct { real_T pbcntez0ai [ 100 ] ;
real_T n05eyz23jc [ 3 ] ; real_T ed1lo4x4g4 [ 3 ] ; real_T l2gr0ebned [ 3 ] ;
struct { void * LoggedData ; } gytj3aqnha ; struct { void * LoggedData ; }
m1d1pas2fr ; struct { void * LoggedData ; } mq2a0pdpqo ; struct { void *
LoggedData ; } dnkp0lbjpv ; struct { void * LoggedData ; } nmm4orqthk ;
struct { void * LoggedData ; } h2hf3ynspq ; struct { void * LoggedData ; }
mlybyagkjn ; struct { void * LoggedData ; } owexu2o3pk ; struct { void *
LoggedData ; } eo3pzdmzps ; struct { void * LoggedData ; } cfwscwnjmj ;
struct { void * LoggedData ; } n1gwhyv2aa ; struct { void * LoggedData ; }
jop32eiyp1 ; struct { void * LoggedData ; } alz4rjaoac ; struct { void *
LoggedData ; } ay3tfequ2l ; struct { void * LoggedData ; } jb551orsgs ;
struct { void * LoggedData ; } iyxztug1kb ; struct { void * LoggedData ; }
jzfdbs1xxy ; juink5juvy pcijbklolg ; int8_T gzz433zqvc ; int8_T ednz5qfmky ;
int8_T jfkviz15ua ; int8_T jbuywcm4yv ; int8_T jdwdhk453l ; int8_T d0ez1lmmyl
; int8_T dztoclg0sz ; int8_T pbbc0xzezp ; int8_T nq0ujzvwsf ; int8_T
pj4zmmvnm5 ; int8_T c50xvzqtoq ; int8_T iwzi5ohrsh ; int8_T mseu5hqjjq ;
int8_T p5iqfnpn2y ; int8_T c2kre5vegc ; int8_T nwewtro2a3 ; int8_T irzn0f512g
; int8_T hmqgd4txud ; int8_T jaeylyrgwx ; int8_T m3xjl5v4ek ; int8_T
p1dcymrsjg ; int8_T eib1ql3mz5 ; boolean_T pbo1kim1gy ; boolean_T i4cmcy3q2a
; boolean_T fzv0yqelnv ; boolean_T cugzvh30un ; boolean_T gcvb3rsm1a ;
boolean_T ck5txcme1q ; boolean_T cqohevrabp ; boolean_T hebcdzc552 ;
oytgsq0e1a k4jqdwwenf ; l3fakxktgq cxfwoerhvl ; l3fakxktgq ccf5xwtinim ;
oytgsq0e1a dshipp4zhkp ; nflggx2yoy dc1zceqmvb ; nflggx2yoy eajtmfyznlk ; }
DW ; typedef struct { real_T dxtuyaluz3 [ 3 ] ; real_T ik0dzr1cdj [ 3 ] ;
real_T kvhquj55c5 ; real_T ocidwxjvrx ; real_T axvoa4r423 [ 3 ] ; real_T
mdbvelmghb ; real_T crpmw3twun ; real_T l1xjnehgi1 ; real_T neo2mqf3bt ;
real_T jic10dbq1f ; real_T noz00fbivj ; real_T jekvc2ve11 ; real_T pttwomnjcm
; real_T mqswwe5ci1 ; real_T drix1kumiq ; real_T jhoshwrqxl ; real_T
l2kogmxgdl ; real_T gl5krc5x5s ; real_T bb235k43oy ; real_T i1zoxpzir0 ;
real_T eax4rmgsbt ; real_T nbd1qufxdm [ 3 ] ; real_T kjmkkonjji [ 3 ] ;
real_T gcykyioeio ; real_T m5rkhxaigz [ 3 ] ; real_T nvgc5m55v3 ; } X ;
typedef struct { real_T dxtuyaluz3 [ 3 ] ; real_T ik0dzr1cdj [ 3 ] ; real_T
kvhquj55c5 ; real_T ocidwxjvrx ; real_T axvoa4r423 [ 3 ] ; real_T mdbvelmghb
; real_T crpmw3twun ; real_T l1xjnehgi1 ; real_T neo2mqf3bt ; real_T
jic10dbq1f ; real_T noz00fbivj ; real_T jekvc2ve11 ; real_T pttwomnjcm ;
real_T mqswwe5ci1 ; real_T drix1kumiq ; real_T jhoshwrqxl ; real_T l2kogmxgdl
; real_T gl5krc5x5s ; real_T bb235k43oy ; real_T i1zoxpzir0 ; real_T
eax4rmgsbt ; real_T nbd1qufxdm [ 3 ] ; real_T kjmkkonjji [ 3 ] ; real_T
gcykyioeio ; real_T m5rkhxaigz [ 3 ] ; real_T nvgc5m55v3 ; } XDot ; typedef
struct { boolean_T dxtuyaluz3 [ 3 ] ; boolean_T ik0dzr1cdj [ 3 ] ; boolean_T
kvhquj55c5 ; boolean_T ocidwxjvrx ; boolean_T axvoa4r423 [ 3 ] ; boolean_T
mdbvelmghb ; boolean_T crpmw3twun ; boolean_T l1xjnehgi1 ; boolean_T
neo2mqf3bt ; boolean_T jic10dbq1f ; boolean_T noz00fbivj ; boolean_T
jekvc2ve11 ; boolean_T pttwomnjcm ; boolean_T mqswwe5ci1 ; boolean_T
drix1kumiq ; boolean_T jhoshwrqxl ; boolean_T l2kogmxgdl ; boolean_T
gl5krc5x5s ; boolean_T bb235k43oy ; boolean_T i1zoxpzir0 ; boolean_T
eax4rmgsbt ; boolean_T nbd1qufxdm [ 3 ] ; boolean_T kjmkkonjji [ 3 ] ;
boolean_T gcykyioeio ; boolean_T m5rkhxaigz [ 3 ] ; boolean_T nvgc5m55v3 ; }
XDis ; typedef struct { ZCSigState dd5sdusarj ; ZCSigState hk2unzjfz1 ;
ZCSigState l2naw3tuvv ; lvkn0hzrdd k4jqdwwenf ; im5tdfbqfr cxfwoerhvl ;
ZCSigState fw2ck0v230 ; im5tdfbqfr ccf5xwtinim ; lvkn0hzrdd dshipp4zhkp ;
ZCSigState e2xzdpuu5e ; } PrevZCX ; typedef struct { rtwCAPI_ModelMappingInfo
mmi ; } DataMapInfo ; struct e2vmaznpov_ { real_T IC_Value [ 3 ] ; real_T
Constant_Value [ 3 ] ; } ; struct b31su1sfev_ { real_T V_in_Y0 ; } ; struct
aaugozvcxb_ { real_T V_fin_Y0 ; } ; struct P_ { real_T FJ2_r4 ; real_T F_D ;
real_T I [ 9 ] ; real_T K_d [ 9 ] ; real_T Tmax ; real_T U_max_RW ; real_T
U_off_pos ; real_T U_on_pos ; real_T Vx_max ; real_T Z0_RW [ 12 ] ; real_T
Zinv [ 12 ] ; real_T alpha ; real_T beta ; real_T control ; real_T den_pos [
2 ] ; real_T dt_Fx1_PH1 ; real_T fa_control ; real_T invI [ 9 ] ; real_T mc ;
real_T mu ; real_T num_pos ; real_T omega ; real_T omega_0 [ 3 ] ; real_T
q0_0 ; real_T q0_des ; real_T qv_0 [ 3 ] ; real_T r0 [ 3 ] ; real_T r0_p1Id [
3 ] ; real_T r_des_fa [ 3 ] ; real_T r_t ; real_T t_acc_fa ; real_T v0 [ 3 ]
; real_T v_des_fa [ 3 ] ; real_T x0_PH2 ; real_T x0_PH3 ; real_T x_start_dec
; real_T xf ; real_T z_start_Fx2_PH1id ; real_T z_start_Fz2_PH2id ; real_T
Constant_Value [ 2 ] ; real_T Constant1_Value [ 2 ] ; real_T Constant2_Value
; real_T Gain_Gain [ 3 ] ; real_T Gain1_Gain [ 3 ] ; real_T
Gain_Gain_cq40qfuggu ; real_T Integrator_IC ; real_T Gain1_Gain_ccpd1tkjyt ;
real_T Gain2_Gain ; real_T Constant_Value_akmtssrtai ; real_T
Integrator_IC_ctraww5gqx ; real_T Gain1_Gain_afxu42ye3m [ 3 ] ; real_T
Gain_Gain_ijakj545mn [ 3 ] ; real_T Gain1_Gain_biljuf3k5o [ 3 ] ; real_T
Gain4_Gain ; real_T Integrator_IC_ljrtrdz11x ; real_T Gain5_Gain ; real_T
Gain6_Gain ; real_T Constant1_Value_bi1r30sqhu ; real_T
Constant1_Value_f2h5tnp2xf [ 2 ] ; real_T Constant2_Value_f5jgk2qlyk [ 2 ] ;
real_T Merge_InitialOutput ; real_T Constant_Value_hb2kygv40x [ 3 ] ; real_T
IC_Value [ 3 ] ; real_T Constant_Value_ddfuos2pe2 [ 3 ] ; real_T
Constant_Value_m3ywocr5li [ 3 ] ; real_T Integrator_IC_prjknul2hl ; real_T
Gain1_Gain_gq54yvmi0s ; real_T Gain3_Gain [ 3 ] ; real_T Gain_Gain_prfefcrmmw
; real_T Gain4_Gain_blfbm01fzo [ 3 ] ; real_T Gain2_Gain_mpjajviz45 ; real_T
Integrator1_IC ; real_T Gain5_Gain_mqtmq5anns [ 3 ] ; real_T Gain8_Gain [ 3 ]
; real_T V_fin_Y0 ; real_T start_FA_Y0 ; real_T V_in_Y0 ; real_T
Pos_HN_start_Y0 ; real_T V_fin_Y0_blxh2icltu ; real_T Pos_RB_start_Y0 ;
real_T dt_PH2_1_Y0 ; real_T Constant_Value_kvy1ybkwso [ 5 ] ; real_T
Merge_InitialOutput_hiywfoi5ir ; real_T Gain_Gain_ctaqewu5jz [ 3 ] ; real_T
Integrator_IC_eclnkc0pcv ; real_T TransferFcn_A ; real_T TransferFcn_C ;
real_T TransferFcn1_A ; real_T TransferFcn1_C ; real_T TransferFcn2_A ;
real_T TransferFcn2_C ; real_T TransferFcn3_A ; real_T TransferFcn3_C ;
real_T Gain_Gain_edw1uflm0w ; real_T Gain1_Gain_cpvnkp1afm ; real_T Relay_YOn
; real_T Relay_YOff ; real_T Gain1_Gain_htkbkalhuk ; real_T Relay1_YOn ;
real_T Relay1_YOff ; real_T Gain2_Gain_b5ows0gery ; real_T Relay2_YOn ;
real_T Relay2_YOff ; real_T Gain5_Gain_fhub2uxipx ; real_T Relay5_YOn ;
real_T Relay5_YOff ; real_T Gain6_Gain_hjqmux1g1x ; real_T Relay3_YOn ;
real_T Relay3_YOff ; real_T Gain9_Gain ; real_T Relay4_YOn ; real_T
Relay4_YOff ; real_T Gain10_Gain ; real_T Gain2_Gain_ojezup1lbz ; real_T
Gain3_Gain_prsrammgq2 ; real_T Integrator_IC_h4ihxe4npk ; real_T
Multiply2_Gain ; real_T Integrator_IC_agcff5drih ; real_T Multiply1_Gain ;
real_T Multiply_Gain ; real_T Integrator_IC_ao15ude1hl ; real_T
Multiply3_Gain ; real_T Integrator_IC_hgjgntvn4b ; real_T
DelayOneStep_InitialCondition ; real_T Gain1_Gain_bfynfmcz2f ; real_T
Gain2_Gain_ae0zhht53r ; real_T Gain3_Gain_hnzra1mcif ; real_T
Gain4_Gain_acmismgbcw ; real_T Gain_Gain_ccmvafsk2y [ 3 ] ; real_T _Value [ 3
] ; real_T Constant3_Value ; real_T Constant3_Value_jmxjgvexfd ; real_T
Constant_Value_anaamreu4b ; real_T Constant1_Value_epzvrriq3n ; real_T
Constant_Value_d4v3rlerh4 ; real_T Constant1_Value_gjp2xt1hsz ; real_T
Constant1_Value_b3b2ibebgt ; real_T Constant2_Value_lasuau2omr ; real_T
Constant1_Value_pi1m4d02hn ; real_T Constant6_Value ; real_T
Constant2_Value_gzezhgiiva ; real_T Constant2_Value_oh1vd01gq3 ; real_T
Constant4_Value ; uint8_T Gain_Gain_nn0z0a2s0s ; b31su1sfev k4jqdwwenf ;
aaugozvcxb cxfwoerhvl ; aaugozvcxb ccf5xwtinim ; b31su1sfev dshipp4zhkp ;
e2vmaznpov dc1zceqmvb ; e2vmaznpov eajtmfyznlk ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern PrevZCX rtPrevZCX ; extern P rtP ; extern mxArray *
mr_Simulink_6DoF_RV_GetDWork ( ) ; extern void mr_Simulink_6DoF_RV_SetDWork (
const mxArray * ssDW ) ; extern mxArray *
mr_Simulink_6DoF_RV_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Simulink_6DoF_RV_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
