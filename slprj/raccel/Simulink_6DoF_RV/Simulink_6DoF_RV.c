#include "rt_logging_mmi.h"
#include "Simulink_6DoF_RV_capi.h"
#include <math.h>
#include "Simulink_6DoF_RV.h"
#include "Simulink_6DoF_RV_private.h"
#include "Simulink_6DoF_RV_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 5 , & stopRequested ) ; }
rtExtModeShutdown ( 5 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 6 ; const char_T
* gbl_raccel_Version = "10.4 (R2021b) 14-May-2021" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; PrevZCX rtPrevZCX ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; void elrnewfckr ( nflggx2yoy * localDW )
{ localDW -> nlwa32a5p1 = true ; } void eajtmfyznl ( SimStruct * rtS_e ,
real_T dmocntuag0 [ 3 ] , nflggx2yoy * localDW , e2vmaznpov * localP ) { if (
ssIsSampleHit ( rtS_e , 1 , 0 ) ) { if ( localDW -> nlwa32a5p1 ) { localDW ->
nlwa32a5p1 = false ; dmocntuag0 [ 0 ] = localP -> IC_Value [ 0 ] ; dmocntuag0
[ 1 ] = localP -> IC_Value [ 1 ] ; dmocntuag0 [ 2 ] = localP -> IC_Value [ 2
] ; } else { dmocntuag0 [ 0 ] = localP -> Constant_Value [ 0 ] ; dmocntuag0 [
1 ] = localP -> Constant_Value [ 1 ] ; dmocntuag0 [ 2 ] = localP ->
Constant_Value [ 2 ] ; } } } void abqlj5wtzc ( e1y4svy2rs * localB ,
b31su1sfev * localP ) { localB -> bf4wrveec1 [ 0 ] = localP -> V_in_Y0 ;
localB -> bf4wrveec1 [ 1 ] = localP -> V_in_Y0 ; localB -> bf4wrveec1 [ 2 ] =
localP -> V_in_Y0 ; } void dshipp4zhk ( SimStruct * rtS_m , real_T a54o4oobpx
, real_T bcqq2q35wp , real_T nu4hz1ahb1 , real_T byitdb4pif , e1y4svy2rs *
localB , oytgsq0e1a * localDW , lvkn0hzrdd * localZCE ) { ZCEventType zcEvent
; if ( ssIsMajorTimeStep ( rtS_m ) ) { zcEvent = rt_ZCFcn (
RISING_ZERO_CROSSING , & localZCE -> pfhwdxfwiq , ( a54o4oobpx ) ) ; if (
zcEvent != NO_ZCEVENT ) { localB -> bf4wrveec1 [ 0 ] = bcqq2q35wp ; localB ->
bf4wrveec1 [ 1 ] = nu4hz1ahb1 ; localB -> bf4wrveec1 [ 2 ] = byitdb4pif ;
localDW -> hjmucl1u2i = 4 ; } } } void goxn545ppi ( fevzj2naqh * localB ,
aaugozvcxb * localP ) { localB -> eioznmeone [ 0 ] = localP -> V_fin_Y0 ;
localB -> eioznmeone [ 1 ] = localP -> V_fin_Y0 ; localB -> eioznmeone [ 2 ]
= localP -> V_fin_Y0 ; } void ccf5xwtini ( SimStruct * rtS_e , boolean_T
d4wszhtmbu , real_T fdqjerdvle , real_T g1jkbwclru , real_T lyemxgsqdq ,
fevzj2naqh * localB , l3fakxktgq * localDW , im5tdfbqfr * localZCE ) { if (
ssIsMajorTimeStep ( rtS_e ) ) { if ( d4wszhtmbu && ( localZCE -> evmjwlgigm
!= POS_ZCSIG ) ) { localB -> eioznmeone [ 0 ] = fdqjerdvle ; localB ->
eioznmeone [ 1 ] = g1jkbwclru ; localB -> eioznmeone [ 2 ] = lyemxgsqdq ;
localDW -> kc3n40mg45 = 4 ; } localZCE -> evmjwlgigm = d4wszhtmbu ; } } void
MdlInitialize ( void ) { int32_T i ; rtX . kvhquj55c5 = rtP . q0_0 ; rtX .
ocidwxjvrx = rtP . r0 [ 2 ] ; rtX . dxtuyaluz3 [ 0 ] = rtP . omega_0 [ 0 ] ;
rtX . ik0dzr1cdj [ 0 ] = rtP . qv_0 [ 0 ] ; rtX . axvoa4r423 [ 0 ] = rtP .
Integrator_IC_eclnkc0pcv ; rtX . dxtuyaluz3 [ 1 ] = rtP . omega_0 [ 1 ] ; rtX
. ik0dzr1cdj [ 1 ] = rtP . qv_0 [ 1 ] ; rtX . axvoa4r423 [ 1 ] = rtP .
Integrator_IC_eclnkc0pcv ; rtX . dxtuyaluz3 [ 2 ] = rtP . omega_0 [ 2 ] ; rtX
. ik0dzr1cdj [ 2 ] = rtP . qv_0 [ 2 ] ; rtX . axvoa4r423 [ 2 ] = rtP .
Integrator_IC_eclnkc0pcv ; rtX . mdbvelmghb = 0.0 ; rtX . crpmw3twun = 0.0 ;
rtX . l1xjnehgi1 = 0.0 ; rtX . neo2mqf3bt = 0.0 ; rtX . jic10dbq1f = rtP . r0
[ 0 ] ; rtX . noz00fbivj = rtP . r0 [ 1 ] ; rtX . jekvc2ve11 = rtP . v0 [ 0 ]
; rtX . pttwomnjcm = rtP . v0 [ 1 ] ; rtX . mqswwe5ci1 = rtP . v0 [ 2 ] ; rtX
. drix1kumiq = 0.0 ; rtX . jhoshwrqxl = 0.0 ; rtX . l2kogmxgdl = 0.0 ; rtX .
gl5krc5x5s = rtP . Integrator_IC_h4ihxe4npk ; rtX . bb235k43oy = rtP .
Integrator_IC_agcff5drih ; rtX . i1zoxpzir0 = rtP . Integrator_IC_ao15ude1hl
; rtX . eax4rmgsbt = rtP . Integrator_IC_hgjgntvn4b ; for ( i = 0 ; i < 100 ;
i ++ ) { rtDW . pbcntez0ai [ i ] = rtP . DelayOneStep_InitialCondition ; }
rtX . gcykyioeio = rtP . Integrator_IC_ctraww5gqx ; rtX . nvgc5m55v3 = rtP .
Integrator_IC ; rtB . n3nqejdod4 = rtP . dt_PH2_1_Y0 ; rtB . jeiao0vue1 [ 0 ]
= rtP . Merge_InitialOutput_hiywfoi5ir ; rtX . m5rkhxaigz [ 0 ] = rtP .
Integrator_IC_ljrtrdz11x ; rtB . ny0ldygyvq [ 0 ] = rtP . Merge_InitialOutput
; rtX . nbd1qufxdm [ 0 ] = rtP . Integrator_IC_prjknul2hl ; rtX . kjmkkonjji
[ 0 ] = rtP . Integrator1_IC ; rtB . jeiao0vue1 [ 1 ] = rtP .
Merge_InitialOutput_hiywfoi5ir ; rtX . m5rkhxaigz [ 1 ] = rtP .
Integrator_IC_ljrtrdz11x ; rtB . ny0ldygyvq [ 1 ] = rtP . Merge_InitialOutput
; rtX . nbd1qufxdm [ 1 ] = rtP . Integrator_IC_prjknul2hl ; rtX . kjmkkonjji
[ 1 ] = rtP . Integrator1_IC ; rtB . jeiao0vue1 [ 2 ] = rtP .
Merge_InitialOutput_hiywfoi5ir ; rtX . m5rkhxaigz [ 2 ] = rtP .
Integrator_IC_ljrtrdz11x ; rtB . ny0ldygyvq [ 2 ] = rtP . Merge_InitialOutput
; rtX . nbd1qufxdm [ 2 ] = rtP . Integrator_IC_prjknul2hl ; rtX . kjmkkonjji
[ 2 ] = rtP . Integrator1_IC ; abqlj5wtzc ( & rtB . dshipp4zhkp , & rtP .
dshipp4zhkp ) ; rtB . k5pnmgii3x [ 0 ] = rtP . V_fin_Y0 ; rtB . ivzzalfydq [
0 ] = rtP . start_FA_Y0 ; rtB . amkjg3fw0e [ 0 ] = rtP . V_in_Y0 ; rtB .
baetwki0hc [ 0 ] = rtP . Pos_HN_start_Y0 ; rtB . k5pnmgii3x [ 1 ] = rtP .
V_fin_Y0 ; rtB . ivzzalfydq [ 1 ] = rtP . start_FA_Y0 ; rtB . amkjg3fw0e [ 1
] = rtP . V_in_Y0 ; rtB . baetwki0hc [ 1 ] = rtP . Pos_HN_start_Y0 ; rtB .
k5pnmgii3x [ 2 ] = rtP . V_fin_Y0 ; rtB . ivzzalfydq [ 2 ] = rtP .
start_FA_Y0 ; rtB . amkjg3fw0e [ 2 ] = rtP . V_in_Y0 ; rtB . baetwki0hc [ 2 ]
= rtP . Pos_HN_start_Y0 ; goxn545ppi ( & rtB . ccf5xwtinim , & rtP .
ccf5xwtinim ) ; abqlj5wtzc ( & rtB . k4jqdwwenf , & rtP . k4jqdwwenf ) ;
goxn545ppi ( & rtB . cxfwoerhvl , & rtP . cxfwoerhvl ) ; rtB . kllc0kyxz3 [ 0
] = rtP . V_fin_Y0_blxh2icltu ; rtB . jp5jusavom [ 0 ] = rtP .
Pos_RB_start_Y0 ; rtB . kllc0kyxz3 [ 1 ] = rtP . V_fin_Y0_blxh2icltu ; rtB .
jp5jusavom [ 1 ] = rtP . Pos_RB_start_Y0 ; rtB . kllc0kyxz3 [ 2 ] = rtP .
V_fin_Y0_blxh2icltu ; rtB . jp5jusavom [ 2 ] = rtP . Pos_RB_start_Y0 ; } void
MdlStart ( void ) { { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { int_T dimensions [ 1 ] = { 3 } ; rtDW . gytj3aqnha . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Mc" , SS_DOUBLE , 0 , 0 , 0
, 3 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1
) ; if ( rtDW . gytj3aqnha . LoggedData == ( NULL ) ) return ; } { int_T
dimensions [ 1 ] = { 3 } ; rtDW . m1d1pas2fr . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "omega_B" , SS_DOUBLE , 0 , 0 , 0 , 3 , 1 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . m1d1pas2fr . LoggedData == ( NULL ) ) return ; } { int_T dimensions [
1 ] = { 4 } ; rtDW . mq2a0pdpqo . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "q" , SS_DOUBLE , 0 , 0 , 0 , 4 , 1 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . mq2a0pdpqo . LoggedData == ( NULL ) ) return ; } { int_T dimensions [
2 ] = { 3 , 3 } ; rtDW . dnkp0lbjpv . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "L" , SS_DOUBLE , 0 , 0 , 0 , 9 , 2 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . dnkp0lbjpv . LoggedData == ( NULL ) ) return ; } { int_T dimensions [
1 ] = { 3 } ; rtDW . nmm4orqthk . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "Pos" , SS_DOUBLE , 0 , 0 , 0 , 3 , 1 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . nmm4orqthk . LoggedData == ( NULL ) ) return ; } { int_T dimensions [
1 ] = { 3 } ; rtDW . h2hf3ynspq . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "Vel" , SS_DOUBLE , 0 , 0 , 0 , 3 , 1 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . h2hf3ynspq . LoggedData == ( NULL ) ) return ; } { int_T dimensions [
1 ] = { 3 } ; rtDW . mlybyagkjn . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "F_LVLH" , SS_DOUBLE , 0 , 0 , 0 , 3 , 1 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . mlybyagkjn . LoggedData == ( NULL ) ) return ; } { int_T dimensions [
1 ] = { 1 } ; rtDW . owexu2o3pk . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "phase" , SS_DOUBLE , 0 , 0 , 0 , 1 , 1 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . owexu2o3pk . LoggedData == ( NULL ) ) return ; } { int_T dimensions [
1 ] = { 3 } ; rtDW . eo3pzdmzps . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "pos_start_FA" , SS_DOUBLE , 0 , 0 , 0 , 3 , 1
, dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . eo3pzdmzps . LoggedData == ( NULL ) ) return ; } { int_T dimensions [
1 ] = { 3 } ; rtDW . cfwscwnjmj . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "pos_start_HN" , SS_DOUBLE , 0 , 0 , 0 , 3 , 1
, dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . cfwscwnjmj . LoggedData == ( NULL ) ) return ; } { int_T dimensions [
1 ] = { 3 } ; rtDW . n1gwhyv2aa . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "pos_start_RB" , SS_DOUBLE , 0 , 0 , 0 , 3 , 1
, dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . n1gwhyv2aa . LoggedData == ( NULL ) ) return ; } { int_T dimensions [
1 ] = { 4 } ; rtDW . jop32eiyp1 . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "M_RW_4" , SS_DOUBLE , 0 , 0 , 0 , 4 , 1 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . jop32eiyp1 . LoggedData == ( NULL ) ) return ; } { int_T dimensions [
1 ] = { 3 } ; rtDW . alz4rjaoac . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "h_RW" , SS_DOUBLE , 0 , 0 , 0 , 3 , 1 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . alz4rjaoac . LoggedData == ( NULL ) ) return ; } { int_T dimensions [
1 ] = { 3 } ; rtDW . ay3tfequ2l . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "F_pos_act" , SS_DOUBLE , 0 , 0 , 0 , 3 , 1 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . ay3tfequ2l . LoggedData == ( NULL ) ) return ; } { int_T dimensions [
1 ] = { 1 } ; rtDW . jb551orsgs . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "time" , SS_DOUBLE , 0 , 0 , 0 , 1 , 1 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.1 , 1 ) ; if (
rtDW . jb551orsgs . LoggedData == ( NULL ) ) return ; } rtDW . irzn0f512g = -
1 ; rtDW . p5iqfnpn2y = - 1 ; rtDW . cqohevrabp = true ; elrnewfckr ( & rtDW
. eajtmfyznlk ) ; elrnewfckr ( & rtDW . dc1zceqmvb ) ; rtDW . gzz433zqvc = -
1 ; rtDW . hebcdzc552 = true ; rtDW . pcijbklolg . isInitialized = 1 ; rtDW .
ednz5qfmky = - 1 ; rtDW . jfkviz15ua = - 1 ; rtDW . jbuywcm4yv = - 1 ;
MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { real_T out [ 9 ] ;
real_T tempR [ 9 ] ; real_T pvmafos4l4 [ 6 ] ; real_T mlm5oeckov [ 4 ] ;
real_T g4eap1liok [ 3 ] ; real_T hhz4fnut4e [ 3 ] ; real_T ixwbagrkq1 [ 3 ] ;
real_T K ; real_T fqri0hwt42 ; real_T grpzb43ppj_idx_0 ; real_T
grpzb43ppj_idx_1 ; real_T grpzb43ppj_idx_2 ; real_T hep0gagn0v ; real_T
mq1lyyfq45 ; real_T normRowMatrix_idx_1 ; real_T normRowMatrix_idx_2 ; real_T
p2pcfa1m5q ; int32_T i ; int8_T rtAction ; int8_T rtPrevAction ; ZCEventType
zcEvent ; srClearBC ( rtDW . eib1ql3mz5 ) ; srClearBC ( rtDW . p1dcymrsjg ) ;
srClearBC ( rtDW . m3xjl5v4ek ) ; srClearBC ( rtDW . jaeylyrgwx ) ; srClearBC
( rtDW . hmqgd4txud ) ; srClearBC ( rtDW . nwewtro2a3 ) ; srClearBC ( rtDW .
c2kre5vegc ) ; srClearBC ( rtDW . mseu5hqjjq ) ; srClearBC ( rtDW .
iwzi5ohrsh ) ; srClearBC ( rtDW . eajtmfyznlk . f0bl5viy3f ) ; srClearBC (
rtDW . c50xvzqtoq ) ; srClearBC ( rtDW . pj4zmmvnm5 ) ; srClearBC ( rtDW .
nq0ujzvwsf ) ; srClearBC ( rtDW . dshipp4zhkp . hjmucl1u2i ) ; srClearBC (
rtDW . ccf5xwtinim . kc3n40mg45 ) ; srClearBC ( rtDW . pbbc0xzezp ) ;
srClearBC ( rtDW . dztoclg0sz ) ; srClearBC ( rtDW . d0ez1lmmyl ) ; srClearBC
( rtDW . jdwdhk453l ) ; rtB . nyh5k3mpjz [ 0 ] = rtX . dxtuyaluz3 [ 0 ] ; rtB
. d1v2bd51lt [ 0 ] = rtX . ik0dzr1cdj [ 0 ] ; rtB . nyh5k3mpjz [ 1 ] = rtX .
dxtuyaluz3 [ 1 ] ; rtB . d1v2bd51lt [ 1 ] = rtX . ik0dzr1cdj [ 1 ] ; rtB .
nyh5k3mpjz [ 2 ] = rtX . dxtuyaluz3 [ 2 ] ; rtB . d1v2bd51lt [ 2 ] = rtX .
ik0dzr1cdj [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtAction = - 1 ; if
( ssIsMajorTimeStep ( rtS ) ) { if ( rtP . control < 0.0 ) { mq1lyyfq45 =
muDoubleScalarCeil ( rtP . control ) ; } else { mq1lyyfq45 =
muDoubleScalarFloor ( rtP . control ) ; } if ( muDoubleScalarIsNaN (
mq1lyyfq45 ) || muDoubleScalarIsInf ( mq1lyyfq45 ) ) { mq1lyyfq45 = 0.0 ; }
else { mq1lyyfq45 = muDoubleScalarRem ( mq1lyyfq45 , 4.294967296E+9 ) ; }
switch ( mq1lyyfq45 < 0.0 ? - ( int32_T ) ( uint32_T ) - mq1lyyfq45 : (
int32_T ) ( uint32_T ) mq1lyyfq45 ) { case 2 : rtAction = 0 ; break ; case 1
: rtAction = 1 ; break ; } rtDW . gzz433zqvc = rtAction ; } else { rtAction =
rtDW . gzz433zqvc ; } switch ( rtAction ) { case 0 : if ( rtP . control ==
1.0 ) { K = rtP . Constant_Value [ 0 ] ; } else { K = rtP . Constant_Value [
1 ] ; } rtB . jeiao0vue1 [ 0 ] = muDoubleScalarTanh ( ( rtP . Constant1_Value
[ 0 ] * rtB . d1v2bd51lt [ 0 ] + rtB . nyh5k3mpjz [ 0 ] ) / rtP .
Constant1_Value [ 1 ] ) * - K ; rtB . jeiao0vue1 [ 1 ] = muDoubleScalarTanh (
( rtP . Constant1_Value [ 0 ] * rtB . d1v2bd51lt [ 1 ] + rtB . nyh5k3mpjz [ 1
] ) / rtP . Constant1_Value [ 1 ] ) * - K ; rtB . jeiao0vue1 [ 2 ] =
muDoubleScalarTanh ( ( rtP . Constant1_Value [ 0 ] * rtB . d1v2bd51lt [ 2 ] +
rtB . nyh5k3mpjz [ 2 ] ) / rtP . Constant1_Value [ 1 ] ) * - K ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . eib1ql3mz5 ) ; } break ;
case 1 : for ( i = 0 ; i < 3 ; i ++ ) { rtB . jeiao0vue1 [ i ] = ( 0.0 - ( (
rtP . K_d [ i + 3 ] * rtB . nyh5k3mpjz [ 1 ] + rtP . K_d [ i ] * rtB .
nyh5k3mpjz [ 0 ] ) + rtP . K_d [ i + 6 ] * rtB . nyh5k3mpjz [ 2 ] ) ) - rtB .
nm5geycoyr * rtB . p5wqmbc4jk [ i ] * rtB . d1v2bd51lt [ i ] ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . p1dcymrsjg ) ; } break ; }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . n05eyz23jc [ 0 ] = rtB .
jeiao0vue1 [ 0 ] ; rtDW . n05eyz23jc [ 1 ] = rtB . jeiao0vue1 [ 1 ] ; rtDW .
n05eyz23jc [ 2 ] = rtB . jeiao0vue1 [ 2 ] ; } } if ( ssIsSampleHit ( rtS , 2
, 0 ) ) { rtB . ituo4cjnxl [ 0 ] = rtDW . n05eyz23jc [ 0 ] ; rtB . ituo4cjnxl
[ 1 ] = rtDW . n05eyz23jc [ 1 ] ; rtB . ituo4cjnxl [ 2 ] = rtDW . n05eyz23jc
[ 2 ] ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { if ( ssGetLogOutput ( rtS )
) { { double locTime = ssGetTaskTime ( rtS , 3 ) ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . gytj3aqnha . LoggedData ) , & rtB . ituo4cjnxl [ 0 ] , 0
) ; } } } } rtB . g2ic42jckq = rtX . kvhquj55c5 ; K = 1.0 /
muDoubleScalarSqrt ( ( ( rtB . g2ic42jckq * rtB . g2ic42jckq + rtB .
d1v2bd51lt [ 0 ] * rtB . d1v2bd51lt [ 0 ] ) + rtB . d1v2bd51lt [ 1 ] * rtB .
d1v2bd51lt [ 1 ] ) + rtB . d1v2bd51lt [ 2 ] * rtB . d1v2bd51lt [ 2 ] ) ;
mq1lyyfq45 = rtB . g2ic42jckq * K ; normRowMatrix_idx_1 = rtB . d1v2bd51lt [
0 ] * K ; normRowMatrix_idx_2 = rtB . d1v2bd51lt [ 1 ] * K ; K *= rtB .
d1v2bd51lt [ 2 ] ; tempR [ 0 ] = 1.0 - ( normRowMatrix_idx_2 *
normRowMatrix_idx_2 + K * K ) * 2.0 ; tempR [ 1 ] = ( normRowMatrix_idx_1 *
normRowMatrix_idx_2 - mq1lyyfq45 * K ) * 2.0 ; tempR [ 2 ] = (
normRowMatrix_idx_1 * K + mq1lyyfq45 * normRowMatrix_idx_2 ) * 2.0 ; tempR [
3 ] = ( normRowMatrix_idx_1 * normRowMatrix_idx_2 + mq1lyyfq45 * K ) * 2.0 ;
tempR [ 4 ] = 1.0 - ( normRowMatrix_idx_1 * normRowMatrix_idx_1 + K * K ) *
2.0 ; tempR [ 5 ] = ( normRowMatrix_idx_2 * K - mq1lyyfq45 *
normRowMatrix_idx_1 ) * 2.0 ; tempR [ 6 ] = ( normRowMatrix_idx_1 * K -
mq1lyyfq45 * normRowMatrix_idx_2 ) * 2.0 ; tempR [ 7 ] = (
normRowMatrix_idx_2 * K + mq1lyyfq45 * normRowMatrix_idx_1 ) * 2.0 ; tempR [
8 ] = 1.0 - ( normRowMatrix_idx_1 * normRowMatrix_idx_1 + normRowMatrix_idx_2
* normRowMatrix_idx_2 ) * 2.0 ; for ( i = 0 ; i < 3 ; i ++ ) { out [ i ] =
tempR [ i * 3 ] ; out [ i + 3 ] = tempR [ i * 3 + 1 ] ; out [ i + 6 ] = tempR
[ i * 3 + 2 ] ; } memcpy ( & rtB . aawzji5g0h [ 0 ] , & out [ 0 ] , 9U *
sizeof ( real_T ) ) ; for ( i = 0 ; i < 3 ; i ++ ) { g4eap1liok [ i ] = ( rtB
. aawzji5g0h [ 3 * i + 1 ] * rtP . _Value [ 1 ] + rtB . aawzji5g0h [ 3 * i ]
* rtP . _Value [ 0 ] ) + rtB . aawzji5g0h [ 3 * i + 2 ] * rtP . _Value [ 2 ]
; } for ( i = 0 ; i < 3 ; i ++ ) { hhz4fnut4e [ i ] = ( rtP . I [ i + 3 ] *
g4eap1liok [ 1 ] + rtP . I [ i ] * g4eap1liok [ 0 ] ) + rtP . I [ i + 6 ] *
g4eap1liok [ 2 ] ; } pvmafos4l4 [ 1 ] = hhz4fnut4e [ 0 ] * g4eap1liok [ 2 ] ;
pvmafos4l4 [ 2 ] = g4eap1liok [ 0 ] * hhz4fnut4e [ 1 ] ; pvmafos4l4 [ 5 ] =
hhz4fnut4e [ 0 ] * g4eap1liok [ 1 ] ; rtB . itazgvg5vs = rtX . ocidwxjvrx ; K
= 3.0 * rtP . mu / muDoubleScalarPower ( rtP . r_t - rtB . itazgvg5vs , rtP .
Constant3_Value ) ; hhz4fnut4e [ 0 ] = ( g4eap1liok [ 1 ] * hhz4fnut4e [ 2 ]
- hhz4fnut4e [ 1 ] * g4eap1liok [ 2 ] ) * K ; hhz4fnut4e [ 1 ] = ( pvmafos4l4
[ 1 ] - g4eap1liok [ 0 ] * hhz4fnut4e [ 2 ] ) * K ; hhz4fnut4e [ 2 ] = (
pvmafos4l4 [ 2 ] - pvmafos4l4 [ 5 ] ) * K ; K = rtP . FJ2_r4 /
muDoubleScalarPower ( rtP . r_t - rtB . itazgvg5vs , rtP .
Constant3_Value_jmxjgvexfd ) ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 3 ) ; if
( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . m1d1pas2fr . LoggedData ) , & rtB . nyh5k3mpjz [ 0 ] , 0
) ; } } } rtB . molhlnljlf [ 0 ] = rtB . g2ic42jckq ; rtB . molhlnljlf [ 1 ]
= rtB . d1v2bd51lt [ 0 ] ; rtB . molhlnljlf [ 2 ] = rtB . d1v2bd51lt [ 1 ] ;
rtB . molhlnljlf [ 3 ] = rtB . d1v2bd51lt [ 2 ] ; if ( ssGetLogOutput ( rtS )
) { { double locTime = ssGetTaskTime ( rtS , 3 ) ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . mq2a0pdpqo . LoggedData ) , & rtB . molhlnljlf [ 0 ] , 0
) ; } } } if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime (
rtS , 3 ) ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . dnkp0lbjpv . LoggedData
) , & rtB . aawzji5g0h [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i < 3 ; i ++ ) {
rtB . otvc3thwzj [ i ] = rtX . axvoa4r423 [ i ] ; g4eap1liok [ i ] = ( ( rtP
. I [ i + 3 ] * rtB . nyh5k3mpjz [ 1 ] + rtP . I [ i ] * rtB . nyh5k3mpjz [ 0
] ) + rtP . I [ i + 6 ] * rtB . nyh5k3mpjz [ 2 ] ) + rtB . otvc3thwzj [ i ] ;
} pvmafos4l4 [ 0 ] = rtB . nyh5k3mpjz [ 1 ] * g4eap1liok [ 2 ] ; pvmafos4l4 [
1 ] = g4eap1liok [ 0 ] * rtB . nyh5k3mpjz [ 2 ] ; pvmafos4l4 [ 2 ] = rtB .
nyh5k3mpjz [ 0 ] * g4eap1liok [ 1 ] ; pvmafos4l4 [ 3 ] = g4eap1liok [ 1 ] *
rtB . nyh5k3mpjz [ 2 ] ; pvmafos4l4 [ 4 ] = rtB . nyh5k3mpjz [ 0 ] *
g4eap1liok [ 2 ] ; pvmafos4l4 [ 5 ] = g4eap1liok [ 0 ] * rtB . nyh5k3mpjz [ 1
] ; mq1lyyfq45 = rtP . TransferFcn_C * rtX . mdbvelmghb ; if ( mq1lyyfq45 >
rtP . U_max_RW ) { rtB . hefr5ndy1s = rtP . U_max_RW ; } else if ( mq1lyyfq45
< - rtP . U_max_RW ) { rtB . hefr5ndy1s = - rtP . U_max_RW ; } else { rtB .
hefr5ndy1s = mq1lyyfq45 ; } mq1lyyfq45 = rtP . TransferFcn1_C * rtX .
crpmw3twun ; if ( mq1lyyfq45 > rtP . U_max_RW ) { rtB . nfrnyxu4q1 = rtP .
U_max_RW ; } else if ( mq1lyyfq45 < - rtP . U_max_RW ) { rtB . nfrnyxu4q1 = -
rtP . U_max_RW ; } else { rtB . nfrnyxu4q1 = mq1lyyfq45 ; } mq1lyyfq45 = rtP
. TransferFcn2_C * rtX . l1xjnehgi1 ; if ( mq1lyyfq45 > rtP . U_max_RW ) {
rtB . pfifbx3mae = rtP . U_max_RW ; } else if ( mq1lyyfq45 < - rtP . U_max_RW
) { rtB . pfifbx3mae = - rtP . U_max_RW ; } else { rtB . pfifbx3mae =
mq1lyyfq45 ; } mq1lyyfq45 = rtP . TransferFcn3_C * rtX . neo2mqf3bt ; if (
mq1lyyfq45 > rtP . U_max_RW ) { rtB . pahzbctuiu = rtP . U_max_RW ; } else if
( mq1lyyfq45 < - rtP . U_max_RW ) { rtB . pahzbctuiu = - rtP . U_max_RW ; }
else { rtB . pahzbctuiu = mq1lyyfq45 ; } for ( i = 0 ; i < 3 ; i ++ ) { rtB .
gtilgu5sle [ i ] = 0.0 ; rtB . gtilgu5sle [ i ] += rtP . Z0_RW [ i ] * rtB .
hefr5ndy1s ; rtB . gtilgu5sle [ i ] += rtP . Z0_RW [ i + 3 ] * rtB .
nfrnyxu4q1 ; rtB . gtilgu5sle [ i ] += rtP . Z0_RW [ i + 6 ] * rtB .
pfifbx3mae ; rtB . gtilgu5sle [ i ] += rtP . Z0_RW [ i + 9 ] * rtB .
pahzbctuiu ; ixwbagrkq1 [ i ] = ( hhz4fnut4e [ i ] - rtB . gtilgu5sle [ i ] )
- ( pvmafos4l4 [ i ] - pvmafos4l4 [ i + 3 ] ) ; } pvmafos4l4 [ 0 ] = rtB .
nyh5k3mpjz [ 1 ] * rtB . d1v2bd51lt [ 2 ] ; pvmafos4l4 [ 1 ] = rtB .
d1v2bd51lt [ 0 ] * rtB . nyh5k3mpjz [ 2 ] ; pvmafos4l4 [ 2 ] = rtB .
nyh5k3mpjz [ 0 ] * rtB . d1v2bd51lt [ 1 ] ; pvmafos4l4 [ 3 ] = rtB .
d1v2bd51lt [ 1 ] * rtB . nyh5k3mpjz [ 2 ] ; pvmafos4l4 [ 4 ] = rtB .
nyh5k3mpjz [ 0 ] * rtB . d1v2bd51lt [ 2 ] ; pvmafos4l4 [ 5 ] = rtB .
d1v2bd51lt [ 0 ] * rtB . nyh5k3mpjz [ 1 ] ; mq1lyyfq45 = 0.0 ; for ( i = 0 ;
i < 3 ; i ++ ) { rtB . ay20p5emux [ i ] = 0.0 ; rtB . ay20p5emux [ i ] += rtP
. invI [ i ] * ixwbagrkq1 [ 0 ] ; rtB . ay20p5emux [ i ] += rtP . invI [ i +
3 ] * ixwbagrkq1 [ 1 ] ; rtB . ay20p5emux [ i ] += rtP . invI [ i + 6 ] *
ixwbagrkq1 [ 2 ] ; mq1lyyfq45 += rtB . d1v2bd51lt [ i ] * rtB . nyh5k3mpjz [
i ] ; rtB . lf0heeyhqb [ i ] = ( rtB . g2ic42jckq * rtB . nyh5k3mpjz [ i ] -
( pvmafos4l4 [ i ] - pvmafos4l4 [ i + 3 ] ) ) * rtP . Gain1_Gain_cpvnkp1afm ;
} rtB . bhmplnjiqo = rtP . Gain_Gain_edw1uflm0w * mq1lyyfq45 ; rtB .
dnw2ogces4 = rtX . jic10dbq1f ; rtB . bxdnivtaee = rtX . noz00fbivj ; if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { rtB . molhlnljlfi [ 0 ] = rtB . dnw2ogces4
; rtB . molhlnljlfi [ 1 ] = rtB . bxdnivtaee ; rtB . molhlnljlfi [ 2 ] = rtB
. itazgvg5vs ; if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 3 ) ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . nmm4orqthk
. LoggedData ) , & rtB . molhlnljlfi [ 0 ] , 0 ) ; } } } } rtB . ngmy3naosv =
rtX . jekvc2ve11 ; rtB . ne431czr4g = rtX . pttwomnjcm ; rtB . hq22sz5nlo =
rtX . mqswwe5ci1 ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { rtB . c0sejfkafv [
0 ] = rtB . ngmy3naosv ; rtB . c0sejfkafv [ 1 ] = rtB . ne431czr4g ; rtB .
c0sejfkafv [ 2 ] = rtB . hq22sz5nlo ; if ( ssGetLogOutput ( rtS ) ) { {
double locTime = ssGetTaskTime ( rtS , 3 ) ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . h2hf3ynspq
. LoggedData ) , & rtB . c0sejfkafv [ 0 ] , 0 ) ; } } } } mq1lyyfq45 = rtP .
num_pos / rtP . den_pos [ 0 ] * rtX . drix1kumiq ; if ( ssIsMajorTimeStep (
rtS ) ) { rtDW . pbo1kim1gy = ( ( mq1lyyfq45 >= rtP . U_on_pos ) || ( ( ! (
mq1lyyfq45 <= rtP . U_off_pos ) ) && rtDW . pbo1kim1gy ) ) ; } mq1lyyfq45 *=
rtP . Gain1_Gain_htkbkalhuk ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
i4cmcy3q2a = ( ( mq1lyyfq45 >= rtP . U_on_pos ) || ( ( ! ( mq1lyyfq45 <= rtP
. U_off_pos ) ) && rtDW . i4cmcy3q2a ) ) ; } if ( ssIsSampleHit ( rtS , 1 , 0
) ) { if ( rtDW . pbo1kim1gy ) { mq1lyyfq45 = rtP . Relay_YOn ; } else {
mq1lyyfq45 = rtP . Relay_YOff ; } if ( rtDW . i4cmcy3q2a ) {
normRowMatrix_idx_1 = rtP . Relay1_YOn ; } else { normRowMatrix_idx_1 = rtP .
Relay1_YOff ; } hep0gagn0v = rtP . Gain2_Gain_b5ows0gery *
normRowMatrix_idx_1 + mq1lyyfq45 ; rtB . nxy0ancgi2 = rtP . Tmax * hep0gagn0v
; } mq1lyyfq45 = rtP . num_pos / rtP . den_pos [ 0 ] * rtX . jhoshwrqxl ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . fzv0yqelnv = ( ( mq1lyyfq45 >= rtP .
U_on_pos ) || ( ( ! ( mq1lyyfq45 <= rtP . U_off_pos ) ) && rtDW . fzv0yqelnv
) ) ; } mq1lyyfq45 *= rtP . Gain5_Gain_fhub2uxipx ; if ( ssIsMajorTimeStep (
rtS ) ) { rtDW . cugzvh30un = ( ( mq1lyyfq45 >= rtP . U_on_pos ) || ( ( ! (
mq1lyyfq45 <= rtP . U_off_pos ) ) && rtDW . cugzvh30un ) ) ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtDW . fzv0yqelnv ) { mq1lyyfq45 = rtP
. Relay2_YOn ; } else { mq1lyyfq45 = rtP . Relay2_YOff ; } if ( rtDW .
cugzvh30un ) { normRowMatrix_idx_1 = rtP . Relay5_YOn ; } else {
normRowMatrix_idx_1 = rtP . Relay5_YOff ; } p2pcfa1m5q = rtP .
Gain6_Gain_hjqmux1g1x * normRowMatrix_idx_1 + mq1lyyfq45 ; rtB . omuqgegu33 =
rtP . Tmax * p2pcfa1m5q ; } mq1lyyfq45 = rtP . num_pos / rtP . den_pos [ 0 ]
* rtX . l2kogmxgdl ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . gcvb3rsm1a = (
( mq1lyyfq45 >= rtP . U_on_pos ) || ( ( ! ( mq1lyyfq45 <= rtP . U_off_pos ) )
&& rtDW . gcvb3rsm1a ) ) ; } mq1lyyfq45 *= rtP . Gain9_Gain ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . ck5txcme1q = ( ( mq1lyyfq45 >= rtP .
U_on_pos ) || ( ( ! ( mq1lyyfq45 <= rtP . U_off_pos ) ) && rtDW . ck5txcme1q
) ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtDW . gcvb3rsm1a ) {
mq1lyyfq45 = rtP . Relay3_YOn ; } else { mq1lyyfq45 = rtP . Relay3_YOff ; }
if ( rtDW . ck5txcme1q ) { normRowMatrix_idx_1 = rtP . Relay4_YOn ; } else {
normRowMatrix_idx_1 = rtP . Relay4_YOff ; } fqri0hwt42 = rtP . Gain10_Gain *
normRowMatrix_idx_1 + mq1lyyfq45 ; rtB . jerw4glkjf = rtP . Tmax * fqri0hwt42
; } for ( i = 0 ; i < 3 ; i ++ ) { rtB . n5iekj0nsu [ i ] = 0.0 ; rtB .
n5iekj0nsu [ i ] += rtB . aawzji5g0h [ i ] * rtB . nxy0ancgi2 ; rtB .
n5iekj0nsu [ i ] += rtB . aawzji5g0h [ i + 3 ] * rtB . omuqgegu33 ; rtB .
n5iekj0nsu [ i ] += rtB . aawzji5g0h [ i + 6 ] * rtB . jerw4glkjf ; } if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 3 ) ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . mlybyagkjn
. LoggedData ) , & rtB . n5iekj0nsu [ 0 ] , 0 ) ; } } } } mq1lyyfq45 = 1.0 /
rtP . mc ; normRowMatrix_idx_1 = rtP . Gain_Gain_ctaqewu5jz [ 0 ] * K + rtB .
jk5fp1pkk1 [ 0 ] ; normRowMatrix_idx_2 = rtP . Gain_Gain_ctaqewu5jz [ 1 ] * K
+ rtB . jk5fp1pkk1 [ 1 ] ; K = rtP . Gain_Gain_ctaqewu5jz [ 2 ] * K + rtB .
jk5fp1pkk1 [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { hhz4fnut4e [ i ] = ( ( (
rtB . aawzji5g0h [ i + 3 ] * normRowMatrix_idx_2 + rtB . aawzji5g0h [ i ] *
normRowMatrix_idx_1 ) + rtB . aawzji5g0h [ i + 6 ] * K ) + rtB . n5iekj0nsu [
i ] ) * mq1lyyfq45 ; } rtB . hj5uunkpfr = 2.0 * rtP . omega * rtB .
hq22sz5nlo + hhz4fnut4e [ 0 ] ; rtB . ct3g5c4k2v = ( rtP .
Gain2_Gain_ojezup1lbz * rtB . itazgvg5vs + hhz4fnut4e [ 2 ] ) + - 2.0 * rtP .
omega * rtB . ngmy3naosv ; rtB . lhkxddx2er = hhz4fnut4e [ 1 ] - rtP .
Gain3_Gain_prsrammgq2 * rtB . bxdnivtaee ; rtB . aqehawlayk = ( rtX .
gl5krc5x5s - rtP . dt_Fx1_PH1 > rtP . Constant2_Value_gzezhgiiva ) ; rtB .
msccedbjem = ( rtB . dnw2ogces4 >= rtP . r0_p1Id [ 0 ] ) ; rtB . blphcp4v05 =
( rtX . bb235k43oy - rtP . dt_Fx1_PH1 > rtP . Constant2_Value_oh1vd01gq3 ) ;
rtB . fbu1x4wjkn = ( ( ! rtB . blphcp4v05 ) && rtB . aqehawlayk && ( rtB .
itazgvg5vs <= rtP . z_start_Fx2_PH1id ) ) ; rtB . eslg1shpjg = rtB .
blphcp4v05 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssIsMajorTimeStep (
rtS ) ) { if ( rtB . blphcp4v05 && ( rtPrevZCX . dd5sdusarj != 1 ) ) { rtB .
n3nqejdod4 = ( ( rtP . Constant_Value_kvy1ybkwso [ 3 ] - rtB . dnw2ogces4 ) *
rtP . Constant_Value_kvy1ybkwso [ 1 ] / 4.0 - rtB . hq22sz5nlo ) * rtP .
Constant_Value_kvy1ybkwso [ 0 ] / rtP . Constant_Value_kvy1ybkwso [ 2 ] * (
rtP . Constant_Value_kvy1ybkwso [ 4 ] + 1.0 ) ; rtDW . jdwdhk453l = 4 ; }
rtPrevZCX . dd5sdusarj = rtB . blphcp4v05 ; } rtB . ib0mnrovu0 = rtDW .
pbcntez0ai [ 0 ] ; } rtB . c51vwh2njw = ( rtX . i1zoxpzir0 - rtB . n3nqejdod4
> rtP . Constant4_Value ) ; rtB . jrget4nbxe = ( rtB . c51vwh2njw && ( ( rtB
. dnw2ogces4 >= rtP . x0_PH3 * 0.8 ) || ( ( rtB . dnw2ogces4 >= ( rtP .
x0_PH2 + rtP . x0_PH3 ) / 2.0 ) && ( rtB . itazgvg5vs <= rtP .
z_start_Fz2_PH2id ) ) ) ) ; rtB . aau4j2zfrw = ( ( rtX . eax4rmgsbt - rtP .
Constant1_Value_b3b2ibebgt > rtP . Constant2_Value_lasuau2omr ) || ( ( rtB .
jrget4nbxe != 0.0 ) && ( ( muDoubleScalarAbs ( rtB . ib0mnrovu0 - rtB .
itazgvg5vs ) <= rtP . Constant6_Value ) && ( muDoubleScalarAbs ( rtB .
itazgvg5vs ) <= rtP . Constant1_Value_pi1m4d02hn ) ) ) ) ; rtB . dwocx2mznt =
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax
( rtP . Multiply2_Gain * rtB . msccedbjem , rtP . Multiply1_Gain * rtB .
fbu1x4wjkn ) , rtP . Multiply_Gain * rtB . eslg1shpjg ) , rtP .
Multiply3_Gain * rtB . jrget4nbxe ) , ( real_T ) ( rtB . aau4j2zfrw ? (
int32_T ) rtP . Gain_Gain_nn0z0a2s0s : 0 ) * 0.015625 ) ; if (
ssIsMajorTimeStep ( rtS ) ) { rtAction = ( int8_T ) ( ( rtB . aqehawlayk || (
! ( rtP . Constant_Value_anaamreu4b == rtB . dwocx2mznt ) ) ) && ( ( ! ( rtB
. dwocx2mznt == rtP . Constant1_Value_epzvrriq3n ) ) || rtB . blphcp4v05 ) )
; rtDW . ednz5qfmky = rtAction ; } else { rtAction = rtDW . ednz5qfmky ; }
switch ( rtAction ) { case 0 : if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
rtDW . cqohevrabp ) { rtDW . cqohevrabp = false ; rtB . gqmnf1wmhg [ 0 ] =
rtP . IC_Value [ 0 ] ; rtB . gqmnf1wmhg [ 1 ] = rtP . IC_Value [ 1 ] ; rtB .
gqmnf1wmhg [ 2 ] = rtP . IC_Value [ 2 ] ; } else { rtB . gqmnf1wmhg [ 0 ] =
rtP . Constant_Value_ddfuos2pe2 [ 0 ] ; rtB . gqmnf1wmhg [ 1 ] = rtP .
Constant_Value_ddfuos2pe2 [ 1 ] ; rtB . gqmnf1wmhg [ 2 ] = rtP .
Constant_Value_ddfuos2pe2 [ 2 ] ; } } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . iwzi5ohrsh ) ; } break ; case 1 : eajtmfyznl ( rtS , rtB
. gqmnf1wmhg , & rtDW . eajtmfyznlk , & rtP . eajtmfyznlk ) ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . eajtmfyznlk . f0bl5viy3f )
; } break ; } rtB . nmajnn4oia = ( ( ! rtB . c51vwh2njw ) && ( rtP .
Constant_Value_d4v3rlerh4 == rtB . dwocx2mznt ) ) ; rtB . ovntti0e41 = ( (
rtB . dwocx2mznt == rtP . Constant1_Value_gjp2xt1hsz ) && ( ! rtB .
aau4j2zfrw ) ) ; rtPrevAction = rtDW . jfkviz15ua ; if ( ssIsMajorTimeStep (
rtS ) ) { if ( rtB . nmajnn4oia ) { rtAction = 0 ; } else if ( rtB .
ovntti0e41 ) { rtAction = 1 ; } else { rtAction = 2 ; } rtDW . jfkviz15ua =
rtAction ; } else { rtAction = rtDW . jfkviz15ua ; } if ( ( rtPrevAction !=
rtAction ) && ( rtPrevAction == 1 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } switch ( rtAction ) {
case 0 : if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . hyohzjd1mz [ 0 ] = rtP
. Constant_Value_m3ywocr5li [ 0 ] ; rtB . hyohzjd1mz [ 1 ] = rtP .
Constant_Value_m3ywocr5li [ 1 ] ; rtB . hyohzjd1mz [ 2 ] = rtP .
Constant_Value_m3ywocr5li [ 2 ] ; } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . c50xvzqtoq ) ; } break ; case 1 : rtB . iayt0jus2n [ 0 ]
= rtP . Gain3_Gain [ 0 ] * rtB . dnw2ogces4 ; rtB . iayt0jus2n [ 1 ] = rtP .
Gain3_Gain [ 1 ] * rtB . bxdnivtaee ; rtB . iayt0jus2n [ 2 ] = rtP .
Gain3_Gain [ 2 ] * rtB . itazgvg5vs ; rtB . cxvazbfrvw [ 0 ] = rtB .
ngmy3naosv ; rtB . cxvazbfrvw [ 1 ] = rtB . ne431czr4g ; rtB . cxvazbfrvw [ 2
] = rtB . hq22sz5nlo ; rtB . nzugy1td30 [ 0 ] = ( ( rtP .
Gain1_Gain_gq54yvmi0s * rtX . nbd1qufxdm [ 0 ] + rtP . Gain_Gain_prfefcrmmw *
rtB . iayt0jus2n [ 0 ] ) + rtP . Gain4_Gain_blfbm01fzo [ 0 ] * rtB .
cxvazbfrvw [ 0 ] * rtP . Gain2_Gain_mpjajviz45 ) + ( rtP .
Gain5_Gain_mqtmq5anns [ 0 ] * rtX . kjmkkonjji [ 0 ] + rtP . Gain8_Gain [ 0 ]
* rtB . cxvazbfrvw [ 0 ] ) ; rtB . nzugy1td30 [ 1 ] = ( ( rtP .
Gain1_Gain_gq54yvmi0s * rtX . nbd1qufxdm [ 1 ] + rtP . Gain_Gain_prfefcrmmw *
rtB . iayt0jus2n [ 1 ] ) + rtP . Gain4_Gain_blfbm01fzo [ 1 ] * rtB .
cxvazbfrvw [ 1 ] * rtP . Gain2_Gain_mpjajviz45 ) + ( rtP .
Gain5_Gain_mqtmq5anns [ 1 ] * rtX . kjmkkonjji [ 1 ] + rtP . Gain8_Gain [ 1 ]
* rtB . cxvazbfrvw [ 1 ] ) ; rtB . nzugy1td30 [ 2 ] = ( ( rtP .
Gain1_Gain_gq54yvmi0s * rtX . nbd1qufxdm [ 2 ] + rtP . Gain_Gain_prfefcrmmw *
rtB . iayt0jus2n [ 2 ] ) + rtP . Gain4_Gain_blfbm01fzo [ 2 ] * rtB .
cxvazbfrvw [ 2 ] * rtP . Gain2_Gain_mpjajviz45 ) + ( rtP .
Gain5_Gain_mqtmq5anns [ 2 ] * rtX . kjmkkonjji [ 2 ] + rtP . Gain8_Gain [ 2 ]
* rtB . cxvazbfrvw [ 2 ] ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB .
hyohzjd1mz [ 0 ] = rtB . nzugy1td30 [ 0 ] ; rtB . hyohzjd1mz [ 1 ] = rtB .
nzugy1td30 [ 1 ] ; rtB . hyohzjd1mz [ 2 ] = rtB . nzugy1td30 [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . pj4zmmvnm5 ) ; } break ;
case 2 : eajtmfyznl ( rtS , rtB . hyohzjd1mz , & rtDW . dc1zceqmvb , & rtP .
dc1zceqmvb ) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
dc1zceqmvb . f0bl5viy3f ) ; } break ; } rtB . jwfwy4yjci [ 0 ] = ( rtP .
Constant_Value_hb2kygv40x [ 0 ] + rtB . gqmnf1wmhg [ 0 ] ) + rtB . hyohzjd1mz
[ 0 ] ; rtB . jwfwy4yjci [ 1 ] = ( rtP . Constant_Value_hb2kygv40x [ 1 ] +
rtB . gqmnf1wmhg [ 1 ] ) + rtB . hyohzjd1mz [ 1 ] ; rtB . jwfwy4yjci [ 2 ] =
( rtP . Constant_Value_hb2kygv40x [ 2 ] + rtB . gqmnf1wmhg [ 2 ] ) + rtB .
hyohzjd1mz [ 2 ] ; rtPrevAction = rtDW . jbuywcm4yv ; rtAction = - 1 ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtB . dwocx2mznt == 3.0 ) { rtAction = 0 ;
} rtDW . jbuywcm4yv = rtAction ; } else { rtAction = rtDW . jbuywcm4yv ; } if
( ( rtPrevAction != rtAction ) && ( rtPrevAction == 0 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; if ( rtDW . p5iqfnpn2y
== 1 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW .
p5iqfnpn2y = - 1 ; } if ( rtAction == 0 ) { rtPrevAction = rtDW . p5iqfnpn2y
; rtAction = - 1 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtP . fa_control <
0.0 ) { mq1lyyfq45 = muDoubleScalarCeil ( rtP . fa_control ) ; } else {
mq1lyyfq45 = muDoubleScalarFloor ( rtP . fa_control ) ; } if (
muDoubleScalarIsNaN ( mq1lyyfq45 ) || muDoubleScalarIsInf ( mq1lyyfq45 ) ) {
mq1lyyfq45 = 0.0 ; } else { mq1lyyfq45 = muDoubleScalarRem ( mq1lyyfq45 ,
4.294967296E+9 ) ; } switch ( mq1lyyfq45 < 0.0 ? - ( int32_T ) ( uint32_T ) -
mq1lyyfq45 : ( int32_T ) ( uint32_T ) mq1lyyfq45 ) { case 1 : rtAction = 0 ;
break ; case 2 : rtAction = 1 ; break ; } rtDW . p5iqfnpn2y = rtAction ; }
else { rtAction = rtDW . p5iqfnpn2y ; } if ( ( rtPrevAction != rtAction ) &&
( rtPrevAction == 1 ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; } switch ( rtAction ) { case 0 : rtB . gxcw523rog = rtP . t_acc_fa - rtX .
gcykyioeio ; rtB . oldgnpofph = ( rtB . dnw2ogces4 >= rtP . x_start_dec * 1.5
) ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ( rtB . gxcw523rog > 0.0 ) && (
rtB . oldgnpofph == 0.0 ) ) { rtAction = 0 ; } else if ( rtB . oldgnpofph ==
1.0 ) { rtAction = 1 ; } else { rtAction = 2 ; } rtDW . irzn0f512g = rtAction
; } else { rtAction = rtDW . irzn0f512g ; } switch ( rtAction ) { case 0 : if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . gdd05xxr4o = rtP . Tmax ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . m3xjl5v4ek ) ; } break ;
case 1 : rtB . bo5hahfv2q = rtB . dnw2ogces4 - rtP . xf ; rtB . gdd05xxr4o =
( rtP . Gain1_Gain_ccpd1tkjyt * rtX . nvgc5m55v3 + rtP . Gain_Gain_cq40qfuggu
* rtB . bo5hahfv2q ) + rtP . Gain2_Gain * rtB . ngmy3naosv ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . jaeylyrgwx ) ; } break ;
case 2 : if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . gdd05xxr4o = rtP .
Constant_Value_akmtssrtai ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC (
rtDW . hmqgd4txud ) ; } break ; } rtB . ami4tmme4t [ 0 ] = rtP .
Gain_Gain_ijakj545mn [ 0 ] * rtB . dnw2ogces4 ; rtB . ami4tmme4t [ 1 ] = rtP
. Gain_Gain_ijakj545mn [ 1 ] * rtB . bxdnivtaee ; rtB . ami4tmme4t [ 2 ] =
rtP . Gain_Gain_ijakj545mn [ 2 ] * rtB . itazgvg5vs ; rtB . ny0ldygyvq [ 0 ]
= ( ( rtP . Gain5_Gain * rtX . m5rkhxaigz [ 0 ] + rtP . Gain4_Gain * rtB .
ami4tmme4t [ 0 ] ) + rtP . Gain1_Gain_biljuf3k5o [ 0 ] * rtB . ngmy3naosv *
rtP . Gain6_Gain ) + rtP . Gain1_Gain_afxu42ye3m [ 0 ] * rtB . gdd05xxr4o ;
rtB . ny0ldygyvq [ 1 ] = ( ( rtP . Gain5_Gain * rtX . m5rkhxaigz [ 1 ] + rtP
. Gain4_Gain * rtB . ami4tmme4t [ 1 ] ) + rtP . Gain1_Gain_biljuf3k5o [ 1 ] *
rtB . ne431czr4g * rtP . Gain6_Gain ) + rtP . Gain1_Gain_afxu42ye3m [ 1 ] *
rtB . gdd05xxr4o ; rtB . ny0ldygyvq [ 2 ] = ( ( rtP . Gain5_Gain * rtX .
m5rkhxaigz [ 2 ] + rtP . Gain4_Gain * rtB . ami4tmme4t [ 2 ] ) + rtP .
Gain1_Gain_biljuf3k5o [ 2 ] * rtB . hq22sz5nlo * rtP . Gain6_Gain ) + rtP .
Gain1_Gain_afxu42ye3m [ 2 ] * rtB . gdd05xxr4o ; if ( ssIsMajorTimeStep ( rtS
) ) { srUpdateBC ( rtDW . nwewtro2a3 ) ; } break ; case 1 : g4eap1liok [ 0 ]
= rtB . ngmy3naosv - rtP . v_des_fa [ 0 ] ; hhz4fnut4e [ 2 ] = rtB .
itazgvg5vs - rtP . r_des_fa [ 2 ] ; mq1lyyfq45 = ( rtB . dnw2ogces4 - rtP .
r_des_fa [ 0 ] ) * rtP . Constant1_Value_f2h5tnp2xf [ 0 ] + g4eap1liok [ 0 ]
; if ( muDoubleScalarAbs ( mq1lyyfq45 ) > rtP . Constant1_Value_f2h5tnp2xf [
1 ] ) { mq1lyyfq45 = muDoubleScalarSign ( mq1lyyfq45 ) ; } else { mq1lyyfq45
/= rtP . Constant1_Value_f2h5tnp2xf [ 1 ] ; } rtB . iz5r5xtklp [ 0 ] = - rtP
. Tmax * mq1lyyfq45 ; mq1lyyfq45 = ( rtB . bxdnivtaee - rtP . r_des_fa [ 1 ]
) * rtP . Constant1_Value_f2h5tnp2xf [ 0 ] + ( rtB . ne431czr4g - rtP .
v_des_fa [ 1 ] ) ; if ( muDoubleScalarAbs ( mq1lyyfq45 ) > rtP .
Constant1_Value_f2h5tnp2xf [ 1 ] ) { mq1lyyfq45 = muDoubleScalarSign (
mq1lyyfq45 ) ; } else { mq1lyyfq45 /= rtP . Constant1_Value_f2h5tnp2xf [ 1 ]
; } rtB . iz5r5xtklp [ 1 ] = - rtP . Tmax * mq1lyyfq45 ; K = mq1lyyfq45 ;
mq1lyyfq45 = ( rtB . hq22sz5nlo - rtP . v_des_fa [ 2 ] ) + rtP .
Constant1_Value_f2h5tnp2xf [ 0 ] * hhz4fnut4e [ 2 ] ; if ( muDoubleScalarAbs
( mq1lyyfq45 ) > rtP . Constant1_Value_f2h5tnp2xf [ 1 ] ) { mq1lyyfq45 =
muDoubleScalarSign ( mq1lyyfq45 ) ; } else { mq1lyyfq45 /= rtP .
Constant1_Value_f2h5tnp2xf [ 1 ] ; } rtB . iz5r5xtklp [ 2 ] = - rtP . Tmax *
mq1lyyfq45 ; if ( ( g4eap1liok [ 0 ] >= rtP . Vx_max ) && ( rtB . iz5r5xtklp
[ 0 ] > 0.0 ) ) { rtB . iz5r5xtklp [ 0 ] = - rtP . Tmax * 0.0 ; rtB .
iz5r5xtklp [ 1 ] = - rtP . Tmax * K ; rtB . iz5r5xtklp [ 2 ] = - rtP . Tmax *
mq1lyyfq45 ; } else if ( ( g4eap1liok [ 0 ] <= - rtP . Vx_max ) && ( rtB .
iz5r5xtklp [ 0 ] < 0.0 ) ) { rtB . iz5r5xtklp [ 0 ] = - rtP . Tmax * 0.0 ;
rtB . iz5r5xtklp [ 1 ] = - rtP . Tmax * K ; rtB . iz5r5xtklp [ 2 ] = - rtP .
Tmax * mq1lyyfq45 ; } rtB . iz5r5xtklp [ 2 ] = ( rtP .
Constant2_Value_f5jgk2qlyk [ 0 ] * rtP . Constant2_Value_f5jgk2qlyk [ 0 ] *
3.0 * hhz4fnut4e [ 2 ] * rtP . Constant2_Value_f5jgk2qlyk [ 1 ] + rtB .
iz5r5xtklp [ 2 ] ) - 2.0 * rtP . Constant2_Value_f5jgk2qlyk [ 0 ] *
g4eap1liok [ 0 ] * rtP . Constant2_Value_f5jgk2qlyk [ 1 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . ny0ldygyvq [ 0 ] = rtB . iz5r5xtklp
[ 0 ] ; rtB . ny0ldygyvq [ 1 ] = rtB . iz5r5xtklp [ 1 ] ; rtB . ny0ldygyvq [
2 ] = rtB . iz5r5xtklp [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC
( rtDW . c2kre5vegc ) ; } break ; } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( rtDW . mseu5hqjjq ) ; } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { rtDW . ed1lo4x4g4 [ 0 ] = rtB .
jwfwy4yjci [ 0 ] ; rtDW . ed1lo4x4g4 [ 1 ] = rtB . jwfwy4yjci [ 1 ] ; rtDW .
ed1lo4x4g4 [ 2 ] = rtB . jwfwy4yjci [ 2 ] ; } if ( ssIsSampleHit ( rtS , 2 ,
0 ) ) { rtDW . l2gr0ebned [ 0 ] = rtB . ny0ldygyvq [ 0 ] ; rtDW . l2gr0ebned
[ 1 ] = rtB . ny0ldygyvq [ 1 ] ; rtDW . l2gr0ebned [ 2 ] = rtB . ny0ldygyvq [
2 ] ; } } if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { rtB . dqejbdzsd2 [ 0 ] =
rtDW . ed1lo4x4g4 [ 0 ] ; rtB . dqejbdzsd2 [ 1 ] = rtDW . ed1lo4x4g4 [ 1 ] ;
rtB . dqejbdzsd2 [ 2 ] = rtDW . ed1lo4x4g4 [ 2 ] ; } if ( ssIsSampleHit ( rtS
, 2 , 0 ) ) { grpzb43ppj_idx_0 = rtB . dqejbdzsd2 [ 0 ] + rtDW . l2gr0ebned [
0 ] ; grpzb43ppj_idx_1 = rtB . dqejbdzsd2 [ 1 ] + rtDW . l2gr0ebned [ 1 ] ;
grpzb43ppj_idx_2 = rtB . dqejbdzsd2 [ 2 ] + rtDW . l2gr0ebned [ 2 ] ; } if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 3 ) ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . owexu2o3pk
. LoggedData ) , & rtB . dwocx2mznt , 0 ) ; } } } } if ( ssIsSampleHit ( rtS
, 1 , 0 ) ) { dshipp4zhk ( rtS , rtB . jrget4nbxe , rtB . ngmy3naosv , rtB .
ne431czr4g , rtB . hq22sz5nlo , & rtB . dshipp4zhkp , & rtDW . dshipp4zhkp ,
& rtPrevZCX . dshipp4zhkp ) ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtB .
aau4j2zfrw && ( rtPrevZCX . e2xzdpuu5e != 1 ) ) { rtB . k5pnmgii3x [ 0 ] =
rtB . ngmy3naosv ; rtB . k5pnmgii3x [ 1 ] = rtB . ne431czr4g ; rtB .
k5pnmgii3x [ 2 ] = rtB . hq22sz5nlo ; rtB . ivzzalfydq [ 0 ] = rtB .
dnw2ogces4 ; rtB . ivzzalfydq [ 1 ] = rtB . bxdnivtaee ; rtB . ivzzalfydq [ 2
] = rtB . itazgvg5vs ; rtDW . nq0ujzvwsf = 4 ; } rtPrevZCX . e2xzdpuu5e = rtB
. aau4j2zfrw ; } rtB . dmedwv4xxx [ 0 ] = rtB . k5pnmgii3x [ 0 ] - rtB .
dshipp4zhkp . bf4wrveec1 [ 0 ] ; rtB . dmedwv4xxx [ 1 ] = rtB . k5pnmgii3x [
1 ] - rtB . dshipp4zhkp . bf4wrveec1 [ 1 ] ; rtB . dmedwv4xxx [ 2 ] = rtB .
k5pnmgii3x [ 2 ] - rtB . dshipp4zhkp . bf4wrveec1 [ 2 ] ; } if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 3 ) ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . eo3pzdmzps
. LoggedData ) , & rtB . ivzzalfydq [ 0 ] , 0 ) ; } } } } if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { if ( ssIsMajorTimeStep ( rtS ) ) { zcEvent = rt_ZCFcn (
RISING_ZERO_CROSSING , & rtPrevZCX . fw2ck0v230 , ( rtB . msccedbjem ) ) ; if
( zcEvent != NO_ZCEVENT ) { rtB . amkjg3fw0e [ 0 ] = rtB . ngmy3naosv ; rtB .
amkjg3fw0e [ 1 ] = rtB . ne431czr4g ; rtB . amkjg3fw0e [ 2 ] = rtB .
hq22sz5nlo ; rtB . baetwki0hc [ 0 ] = rtB . dnw2ogces4 ; rtB . baetwki0hc [ 1
] = rtB . bxdnivtaee ; rtB . baetwki0hc [ 2 ] = rtB . itazgvg5vs ; rtDW .
pbbc0xzezp = 4 ; } } ccf5xwtini ( rtS , rtB . aqehawlayk , rtB . ngmy3naosv ,
rtB . ne431czr4g , rtB . hq22sz5nlo , & rtB . ccf5xwtinim , & rtDW .
ccf5xwtinim , & rtPrevZCX . ccf5xwtinim ) ; rtB . gj0wyz4siq [ 0 ] = rtB .
ccf5xwtinim . eioznmeone [ 0 ] - rtB . amkjg3fw0e [ 0 ] ; rtB . gj0wyz4siq [
1 ] = rtB . ccf5xwtinim . eioznmeone [ 1 ] - rtB . amkjg3fw0e [ 1 ] ; rtB .
gj0wyz4siq [ 2 ] = rtB . ccf5xwtinim . eioznmeone [ 2 ] - rtB . amkjg3fw0e [
2 ] ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { if ( ssGetLogOutput ( rtS ) )
{ { double locTime = ssGetTaskTime ( rtS , 3 ) ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . cfwscwnjmj . LoggedData ) , & rtB . baetwki0hc [ 0 ] , 0
) ; } } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { dshipp4zhk ( rtS , rtB .
fbu1x4wjkn , rtB . ngmy3naosv , rtB . ne431czr4g , rtB . hq22sz5nlo , & rtB .
k4jqdwwenf , & rtDW . k4jqdwwenf , & rtPrevZCX . k4jqdwwenf ) ; ccf5xwtini (
rtS , rtB . blphcp4v05 , rtB . ngmy3naosv , rtB . ne431czr4g , rtB .
hq22sz5nlo , & rtB . cxfwoerhvl , & rtDW . cxfwoerhvl , & rtPrevZCX .
cxfwoerhvl ) ; rtB . pstrw1koj3 [ 0 ] = rtB . cxfwoerhvl . eioznmeone [ 0 ] -
rtB . k4jqdwwenf . bf4wrveec1 [ 0 ] ; rtB . pstrw1koj3 [ 1 ] = rtB .
cxfwoerhvl . eioznmeone [ 1 ] - rtB . k4jqdwwenf . bf4wrveec1 [ 1 ] ; rtB .
pstrw1koj3 [ 2 ] = rtB . cxfwoerhvl . eioznmeone [ 2 ] - rtB . k4jqdwwenf .
bf4wrveec1 [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtB . c51vwh2njw
&& ( rtPrevZCX . l2naw3tuvv != 1 ) ) { rtB . kllc0kyxz3 [ 0 ] = rtB .
ngmy3naosv ; rtB . kllc0kyxz3 [ 1 ] = rtB . ne431czr4g ; rtB . kllc0kyxz3 [ 2
] = rtB . hq22sz5nlo ; rtDW . dztoclg0sz = 4 ; } rtPrevZCX . l2naw3tuvv = rtB
. c51vwh2njw ; if ( rtB . blphcp4v05 && ( rtPrevZCX . hk2unzjfz1 != 1 ) ) {
rtB . jp5jusavom [ 0 ] = rtB . dnw2ogces4 ; rtB . jp5jusavom [ 1 ] = rtB .
bxdnivtaee ; rtB . jp5jusavom [ 2 ] = rtB . itazgvg5vs ; rtDW . d0ez1lmmyl =
4 ; } rtPrevZCX . hk2unzjfz1 = rtB . blphcp4v05 ; } } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 3 ) ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . n1gwhyv2aa
. LoggedData ) , & rtB . jp5jusavom [ 0 ] , 0 ) ; } } } rtB . njc2k5n4x2 [ 0
] = rtB . hefr5ndy1s ; rtB . njc2k5n4x2 [ 1 ] = rtB . nfrnyxu4q1 ; rtB .
njc2k5n4x2 [ 2 ] = rtB . pfifbx3mae ; rtB . njc2k5n4x2 [ 3 ] = rtB .
pahzbctuiu ; if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime
( rtS , 3 ) ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . jop32eiyp1 . LoggedData
) , & rtB . njc2k5n4x2 [ 0 ] , 0 ) ; } } } if ( ssGetLogOutput ( rtS ) ) { {
double locTime = ssGetTaskTime ( rtS , 3 ) ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . alz4rjaoac
. LoggedData ) , & rtB . otvc3thwzj [ 0 ] , 0 ) ; } } } } if ( ssIsSampleHit
( rtS , 2 , 0 ) ) { for ( i = 0 ; i < 4 ; i ++ ) { mlm5oeckov [ i ] = ( rtP .
Zinv [ i + 4 ] * rtB . ituo4cjnxl [ 1 ] + rtP . Zinv [ i ] * rtB . ituo4cjnxl
[ 0 ] ) + rtP . Zinv [ i + 8 ] * rtB . ituo4cjnxl [ 2 ] ; } rtB . irwem5yeaq
= rtP . Gain1_Gain_bfynfmcz2f * mlm5oeckov [ 0 ] ; rtB . mabmgihsnd = rtP .
Gain2_Gain_ae0zhht53r * mlm5oeckov [ 1 ] ; rtB . a4fhdaeryk = rtP .
Gain3_Gain_hnzra1mcif * mlm5oeckov [ 2 ] ; rtB . fjbxch0dig = rtP .
Gain4_Gain_acmismgbcw * mlm5oeckov [ 3 ] ; } if ( ssIsSampleHit ( rtS , 3 , 0
) ) { rtB . amiz1f005p [ 0 ] = rtB . nxy0ancgi2 ; rtB . amiz1f005p [ 1 ] =
rtB . omuqgegu33 ; rtB . amiz1f005p [ 2 ] = rtB . jerw4glkjf ; if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 3 ) ; if
( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ay3tfequ2l . LoggedData ) , & rtB . amiz1f005p [ 0 ] , 0
) ; } } } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . jtngbjl3ja = 1.0 /
rtP . Tmax * grpzb43ppj_idx_0 ; rtB . gjgctmesjj = 1.0 / rtP . Tmax *
grpzb43ppj_idx_1 ; rtB . lleqa5mxxo = 1.0 / rtP . Tmax * grpzb43ppj_idx_2 ; }
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . mv4f242ju1 = rtB . jtngbjl3ja -
hep0gagn0v ; rtB . j1u5mmksou = rtB . gjgctmesjj - p2pcfa1m5q ; rtB .
ac1wbfy433 = rtB . lleqa5mxxo - fqri0hwt42 ; } rtB . ki3h340w2w = ssGetT (
rtS ) ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { if ( ssGetLogOutput ( rtS ) )
{ { double locTime = ssGetTaskTime ( rtS , 3 ) ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . jb551orsgs . LoggedData ) , & rtB . ki3h340w2w , 0 ) ; }
} } } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID5 ( int_T tid ) { rtB .
jk5fp1pkk1 [ 0 ] = rtP . Gain_Gain_ccmvafsk2y [ 0 ] * rtP . F_D ; rtB .
p5wqmbc4jk [ 0 ] = rtP . Constant2_Value / ( rtP . Gain_Gain [ 0 ] * rtP .
alpha + rtP . Gain1_Gain [ 0 ] * rtP . beta ) ; rtB . jk5fp1pkk1 [ 1 ] = rtP
. Gain_Gain_ccmvafsk2y [ 1 ] * rtP . F_D ; rtB . p5wqmbc4jk [ 1 ] = rtP .
Constant2_Value / ( rtP . Gain_Gain [ 1 ] * rtP . alpha + rtP . Gain1_Gain [
1 ] * rtP . beta ) ; rtB . jk5fp1pkk1 [ 2 ] = rtP . Gain_Gain_ccmvafsk2y [ 2
] * rtP . F_D ; rtB . p5wqmbc4jk [ 2 ] = rtP . Constant2_Value / ( rtP .
Gain_Gain [ 2 ] * rtP . alpha + rtP . Gain1_Gain [ 2 ] * rtP . beta ) ; rtB .
nm5geycoyr = muDoubleScalarSign ( rtP . q0_des ) ; UNUSED_PARAMETER ( tid ) ;
} void MdlUpdate ( int_T tid ) { int32_T idxDelay ; if ( ssIsSampleHit ( rtS
, 1 , 0 ) ) { for ( idxDelay = 0 ; idxDelay < 99 ; idxDelay ++ ) { rtDW .
pbcntez0ai [ ( uint32_T ) idxDelay ] = rtDW . pbcntez0ai [ idxDelay + 1U ] ;
} rtDW . pbcntez0ai [ 99 ] = rtB . itazgvg5vs ; } UNUSED_PARAMETER ( tid ) ;
} void MdlUpdateTID5 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> kvhquj55c5 = rtB . bhmplnjiqo ; _rtXdot -> ocidwxjvrx =
rtB . hq22sz5nlo ; _rtXdot -> dxtuyaluz3 [ 0 ] = rtB . ay20p5emux [ 0 ] ;
_rtXdot -> ik0dzr1cdj [ 0 ] = rtB . lf0heeyhqb [ 0 ] ; _rtXdot -> axvoa4r423
[ 0 ] = rtB . gtilgu5sle [ 0 ] ; _rtXdot -> dxtuyaluz3 [ 1 ] = rtB .
ay20p5emux [ 1 ] ; _rtXdot -> ik0dzr1cdj [ 1 ] = rtB . lf0heeyhqb [ 1 ] ;
_rtXdot -> axvoa4r423 [ 1 ] = rtB . gtilgu5sle [ 1 ] ; _rtXdot -> dxtuyaluz3
[ 2 ] = rtB . ay20p5emux [ 2 ] ; _rtXdot -> ik0dzr1cdj [ 2 ] = rtB .
lf0heeyhqb [ 2 ] ; _rtXdot -> axvoa4r423 [ 2 ] = rtB . gtilgu5sle [ 2 ] ;
_rtXdot -> mdbvelmghb = 0.0 ; _rtXdot -> mdbvelmghb += rtP . TransferFcn_A *
rtX . mdbvelmghb ; _rtXdot -> mdbvelmghb += rtB . irwem5yeaq ; _rtXdot ->
crpmw3twun = 0.0 ; _rtXdot -> crpmw3twun += rtP . TransferFcn1_A * rtX .
crpmw3twun ; _rtXdot -> crpmw3twun += rtB . mabmgihsnd ; _rtXdot ->
l1xjnehgi1 = 0.0 ; _rtXdot -> l1xjnehgi1 += rtP . TransferFcn2_A * rtX .
l1xjnehgi1 ; _rtXdot -> l1xjnehgi1 += rtB . a4fhdaeryk ; _rtXdot ->
neo2mqf3bt = 0.0 ; _rtXdot -> neo2mqf3bt += rtP . TransferFcn3_A * rtX .
neo2mqf3bt ; _rtXdot -> neo2mqf3bt += rtB . fjbxch0dig ; _rtXdot ->
jic10dbq1f = rtB . ngmy3naosv ; _rtXdot -> noz00fbivj = rtB . ne431czr4g ;
_rtXdot -> jekvc2ve11 = rtB . hj5uunkpfr ; _rtXdot -> pttwomnjcm = rtB .
lhkxddx2er ; _rtXdot -> mqswwe5ci1 = rtB . ct3g5c4k2v ; _rtXdot -> drix1kumiq
= 0.0 ; _rtXdot -> drix1kumiq += - rtP . den_pos [ 1 ] / rtP . den_pos [ 0 ]
* rtX . drix1kumiq ; _rtXdot -> drix1kumiq += rtB . mv4f242ju1 ; _rtXdot ->
jhoshwrqxl = 0.0 ; _rtXdot -> jhoshwrqxl += - rtP . den_pos [ 1 ] / rtP .
den_pos [ 0 ] * rtX . jhoshwrqxl ; _rtXdot -> jhoshwrqxl += rtB . j1u5mmksou
; _rtXdot -> l2kogmxgdl = 0.0 ; _rtXdot -> l2kogmxgdl += - rtP . den_pos [ 1
] / rtP . den_pos [ 0 ] * rtX . l2kogmxgdl ; _rtXdot -> l2kogmxgdl += rtB .
ac1wbfy433 ; _rtXdot -> gl5krc5x5s = rtB . msccedbjem ; _rtXdot -> bb235k43oy
= rtB . fbu1x4wjkn ; _rtXdot -> i1zoxpzir0 = rtB . eslg1shpjg ; _rtXdot ->
eax4rmgsbt = rtB . jrget4nbxe ; { real_T * dx ; int_T i ; dx = & ( ( ( XDot *
) ssGetdX ( rtS ) ) -> nbd1qufxdm [ 0 ] ) ; for ( i = 0 ; i < 6 ; i ++ ) { dx
[ i ] = 0.0 ; } } if ( rtDW . jfkviz15ua == 1 ) { _rtXdot -> nbd1qufxdm [ 0 ]
= rtB . iayt0jus2n [ 0 ] ; _rtXdot -> kjmkkonjji [ 0 ] = rtB . cxvazbfrvw [ 0
] ; _rtXdot -> nbd1qufxdm [ 1 ] = rtB . iayt0jus2n [ 1 ] ; _rtXdot ->
kjmkkonjji [ 1 ] = rtB . cxvazbfrvw [ 1 ] ; _rtXdot -> nbd1qufxdm [ 2 ] = rtB
. iayt0jus2n [ 2 ] ; _rtXdot -> kjmkkonjji [ 2 ] = rtB . cxvazbfrvw [ 2 ] ; }
{ real_T * dx ; int_T i ; dx = & ( ( ( XDot * ) ssGetdX ( rtS ) ) ->
gcykyioeio ) ; for ( i = 0 ; i < 5 ; i ++ ) { dx [ i ] = 0.0 ; } } if ( rtDW
. jbuywcm4yv == 0 ) { { real_T * dx ; int_T i ; dx = & ( ( ( XDot * ) ssGetdX
( rtS ) ) -> gcykyioeio ) ; for ( i = 0 ; i < 5 ; i ++ ) { dx [ i ] = 0.0 ; }
} if ( rtDW . p5iqfnpn2y == 0 ) { _rtXdot -> gcykyioeio = rtP .
Constant1_Value_bi1r30sqhu ; ( ( XDot * ) ssGetdX ( rtS ) ) -> nvgc5m55v3 =
0.0 ; if ( rtDW . irzn0f512g == 1 ) { _rtXdot -> nvgc5m55v3 = rtB .
bo5hahfv2q ; } _rtXdot -> m5rkhxaigz [ 0 ] = rtB . ami4tmme4t [ 0 ] ; _rtXdot
-> m5rkhxaigz [ 1 ] = rtB . ami4tmme4t [ 1 ] ; _rtXdot -> m5rkhxaigz [ 2 ] =
rtB . ami4tmme4t [ 2 ] ; } } } void MdlProjection ( void ) { } void
MdlTerminate ( void ) { } static void mr_Simulink_6DoF_RV_cacheDataAsMxArray
( mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_Simulink_6DoF_RV_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_Simulink_6DoF_RV_restoreDataFromMxArray (
void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_Simulink_6DoF_RV_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_Simulink_6DoF_RV_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) ; static void
mr_Simulink_6DoF_RV_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Simulink_6DoF_RV_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Simulink_6DoF_RV_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Simulink_6DoF_RV_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_Simulink_6DoF_RV_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Simulink_6DoF_RV_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_Simulink_6DoF_RV_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_Simulink_6DoF_RV_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_Simulink_6DoF_RV_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
{ mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Simulink_6DoF_RV_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Simulink_6DoF_RV_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Simulink_6DoF_RV_GetDWork ( ) {
static const char * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "rtPrevZCX" , }
; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
rtB ) , sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 43 ] =
{ "rtDW.pbcntez0ai" , "rtDW.n05eyz23jc" , "rtDW.ed1lo4x4g4" ,
"rtDW.l2gr0ebned" , "rtDW.pcijbklolg" , "rtDW.gzz433zqvc" , "rtDW.ednz5qfmky"
, "rtDW.jfkviz15ua" , "rtDW.jbuywcm4yv" , "rtDW.jdwdhk453l" ,
"rtDW.d0ez1lmmyl" , "rtDW.dztoclg0sz" , "rtDW.pbbc0xzezp" , "rtDW.nq0ujzvwsf"
, "rtDW.pj4zmmvnm5" , "rtDW.c50xvzqtoq" , "rtDW.iwzi5ohrsh" ,
"rtDW.mseu5hqjjq" , "rtDW.p5iqfnpn2y" , "rtDW.c2kre5vegc" , "rtDW.nwewtro2a3"
, "rtDW.irzn0f512g" , "rtDW.hmqgd4txud" , "rtDW.jaeylyrgwx" ,
"rtDW.m3xjl5v4ek" , "rtDW.p1dcymrsjg" , "rtDW.eib1ql3mz5" , "rtDW.pbo1kim1gy"
, "rtDW.i4cmcy3q2a" , "rtDW.fzv0yqelnv" , "rtDW.cugzvh30un" ,
"rtDW.gcvb3rsm1a" , "rtDW.ck5txcme1q" , "rtDW.cqohevrabp" , "rtDW.hebcdzc552"
, "rtDW.k4jqdwwenf.hjmucl1u2i" , "rtDW.cxfwoerhvl.kc3n40mg45" ,
"rtDW.ccf5xwtinim.kc3n40mg45" , "rtDW.dshipp4zhkp.hjmucl1u2i" ,
"rtDW.dc1zceqmvb.f0bl5viy3f" , "rtDW.dc1zceqmvb.nlwa32a5p1" ,
"rtDW.eajtmfyznlk.f0bl5viy3f" , "rtDW.eajtmfyznlk.nlwa32a5p1" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 43 , rtdwDataFieldNames ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * )
& ( rtDW . pbcntez0ai ) , sizeof ( rtDW . pbcntez0ai ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * )
& ( rtDW . n05eyz23jc ) , sizeof ( rtDW . n05eyz23jc ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * )
& ( rtDW . ed1lo4x4g4 ) , sizeof ( rtDW . ed1lo4x4g4 ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * )
& ( rtDW . l2gr0ebned ) , sizeof ( rtDW . l2gr0ebned ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * )
& ( rtDW . pcijbklolg ) , sizeof ( rtDW . pcijbklolg ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * )
& ( rtDW . gzz433zqvc ) , sizeof ( rtDW . gzz433zqvc ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * )
& ( rtDW . ednz5qfmky ) , sizeof ( rtDW . ednz5qfmky ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * )
& ( rtDW . jfkviz15ua ) , sizeof ( rtDW . jfkviz15ua ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * )
& ( rtDW . jbuywcm4yv ) , sizeof ( rtDW . jbuywcm4yv ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * )
& ( rtDW . jdwdhk453l ) , sizeof ( rtDW . jdwdhk453l ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * )
& ( rtDW . d0ez1lmmyl ) , sizeof ( rtDW . d0ez1lmmyl ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * )
& ( rtDW . dztoclg0sz ) , sizeof ( rtDW . dztoclg0sz ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * )
& ( rtDW . pbbc0xzezp ) , sizeof ( rtDW . pbbc0xzezp ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * )
& ( rtDW . nq0ujzvwsf ) , sizeof ( rtDW . nq0ujzvwsf ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * )
& ( rtDW . pj4zmmvnm5 ) , sizeof ( rtDW . pj4zmmvnm5 ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * )
& ( rtDW . c50xvzqtoq ) , sizeof ( rtDW . c50xvzqtoq ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * )
& ( rtDW . iwzi5ohrsh ) , sizeof ( rtDW . iwzi5ohrsh ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * )
& ( rtDW . mseu5hqjjq ) , sizeof ( rtDW . mseu5hqjjq ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * )
& ( rtDW . p5iqfnpn2y ) , sizeof ( rtDW . p5iqfnpn2y ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * )
& ( rtDW . c2kre5vegc ) , sizeof ( rtDW . c2kre5vegc ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * )
& ( rtDW . nwewtro2a3 ) , sizeof ( rtDW . nwewtro2a3 ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * )
& ( rtDW . irzn0f512g ) , sizeof ( rtDW . irzn0f512g ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * )
& ( rtDW . hmqgd4txud ) , sizeof ( rtDW . hmqgd4txud ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * )
& ( rtDW . jaeylyrgwx ) , sizeof ( rtDW . jaeylyrgwx ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * )
& ( rtDW . m3xjl5v4ek ) , sizeof ( rtDW . m3xjl5v4ek ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * )
& ( rtDW . p1dcymrsjg ) , sizeof ( rtDW . p1dcymrsjg ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * )
& ( rtDW . eib1ql3mz5 ) , sizeof ( rtDW . eib1ql3mz5 ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * )
& ( rtDW . pbo1kim1gy ) , sizeof ( rtDW . pbo1kim1gy ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * )
& ( rtDW . i4cmcy3q2a ) , sizeof ( rtDW . i4cmcy3q2a ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * )
& ( rtDW . fzv0yqelnv ) , sizeof ( rtDW . fzv0yqelnv ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * )
& ( rtDW . cugzvh30un ) , sizeof ( rtDW . cugzvh30un ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * )
& ( rtDW . gcvb3rsm1a ) , sizeof ( rtDW . gcvb3rsm1a ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void * )
& ( rtDW . ck5txcme1q ) , sizeof ( rtDW . ck5txcme1q ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * )
& ( rtDW . cqohevrabp ) , sizeof ( rtDW . cqohevrabp ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * )
& ( rtDW . hebcdzc552 ) , sizeof ( rtDW . hebcdzc552 ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * )
& ( rtDW . k4jqdwwenf . hjmucl1u2i ) , sizeof ( rtDW . k4jqdwwenf .
hjmucl1u2i ) ) ; mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 36 ,
( const void * ) & ( rtDW . cxfwoerhvl . kc3n40mg45 ) , sizeof ( rtDW .
cxfwoerhvl . kc3n40mg45 ) ) ; mr_Simulink_6DoF_RV_cacheDataAsMxArray (
rtdwData , 0 , 37 , ( const void * ) & ( rtDW . ccf5xwtinim . kc3n40mg45 ) ,
sizeof ( rtDW . ccf5xwtinim . kc3n40mg45 ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * )
& ( rtDW . dshipp4zhkp . hjmucl1u2i ) , sizeof ( rtDW . dshipp4zhkp .
hjmucl1u2i ) ) ; mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 39 ,
( const void * ) & ( rtDW . dc1zceqmvb . f0bl5viy3f ) , sizeof ( rtDW .
dc1zceqmvb . f0bl5viy3f ) ) ; mr_Simulink_6DoF_RV_cacheDataAsMxArray (
rtdwData , 0 , 40 , ( const void * ) & ( rtDW . dc1zceqmvb . nlwa32a5p1 ) ,
sizeof ( rtDW . dc1zceqmvb . nlwa32a5p1 ) ) ;
mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void * )
& ( rtDW . eajtmfyznlk . f0bl5viy3f ) , sizeof ( rtDW . eajtmfyznlk .
f0bl5viy3f ) ) ; mr_Simulink_6DoF_RV_cacheDataAsMxArray ( rtdwData , 0 , 42 ,
( const void * ) & ( rtDW . eajtmfyznlk . nlwa32a5p1 ) , sizeof ( rtDW .
eajtmfyznlk . nlwa32a5p1 ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData )
; } mr_Simulink_6DoF_RV_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const void * )
& ( rtPrevZCX ) , sizeof ( rtPrevZCX ) ) ; return ssDW ; } void
mr_Simulink_6DoF_RV_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0
, 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber (
ssDW , 0 , 1 ) ; mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & (
rtDW . pbcntez0ai ) , rtdwData , 0 , 0 , sizeof ( rtDW . pbcntez0ai ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . n05eyz23jc
) , rtdwData , 0 , 1 , sizeof ( rtDW . n05eyz23jc ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . ed1lo4x4g4
) , rtdwData , 0 , 2 , sizeof ( rtDW . ed1lo4x4g4 ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . l2gr0ebned
) , rtdwData , 0 , 3 , sizeof ( rtDW . l2gr0ebned ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . pcijbklolg
) , rtdwData , 0 , 4 , sizeof ( rtDW . pcijbklolg ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . gzz433zqvc
) , rtdwData , 0 , 5 , sizeof ( rtDW . gzz433zqvc ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . ednz5qfmky
) , rtdwData , 0 , 6 , sizeof ( rtDW . ednz5qfmky ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . jfkviz15ua
) , rtdwData , 0 , 7 , sizeof ( rtDW . jfkviz15ua ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . jbuywcm4yv
) , rtdwData , 0 , 8 , sizeof ( rtDW . jbuywcm4yv ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . jdwdhk453l
) , rtdwData , 0 , 9 , sizeof ( rtDW . jdwdhk453l ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . d0ez1lmmyl
) , rtdwData , 0 , 10 , sizeof ( rtDW . d0ez1lmmyl ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . dztoclg0sz
) , rtdwData , 0 , 11 , sizeof ( rtDW . dztoclg0sz ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . pbbc0xzezp
) , rtdwData , 0 , 12 , sizeof ( rtDW . pbbc0xzezp ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . nq0ujzvwsf
) , rtdwData , 0 , 13 , sizeof ( rtDW . nq0ujzvwsf ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . pj4zmmvnm5
) , rtdwData , 0 , 14 , sizeof ( rtDW . pj4zmmvnm5 ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . c50xvzqtoq
) , rtdwData , 0 , 15 , sizeof ( rtDW . c50xvzqtoq ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . iwzi5ohrsh
) , rtdwData , 0 , 16 , sizeof ( rtDW . iwzi5ohrsh ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . mseu5hqjjq
) , rtdwData , 0 , 17 , sizeof ( rtDW . mseu5hqjjq ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . p5iqfnpn2y
) , rtdwData , 0 , 18 , sizeof ( rtDW . p5iqfnpn2y ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . c2kre5vegc
) , rtdwData , 0 , 19 , sizeof ( rtDW . c2kre5vegc ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . nwewtro2a3
) , rtdwData , 0 , 20 , sizeof ( rtDW . nwewtro2a3 ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . irzn0f512g
) , rtdwData , 0 , 21 , sizeof ( rtDW . irzn0f512g ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . hmqgd4txud
) , rtdwData , 0 , 22 , sizeof ( rtDW . hmqgd4txud ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . jaeylyrgwx
) , rtdwData , 0 , 23 , sizeof ( rtDW . jaeylyrgwx ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . m3xjl5v4ek
) , rtdwData , 0 , 24 , sizeof ( rtDW . m3xjl5v4ek ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . p1dcymrsjg
) , rtdwData , 0 , 25 , sizeof ( rtDW . p1dcymrsjg ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . eib1ql3mz5
) , rtdwData , 0 , 26 , sizeof ( rtDW . eib1ql3mz5 ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . pbo1kim1gy
) , rtdwData , 0 , 27 , sizeof ( rtDW . pbo1kim1gy ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . i4cmcy3q2a
) , rtdwData , 0 , 28 , sizeof ( rtDW . i4cmcy3q2a ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . fzv0yqelnv
) , rtdwData , 0 , 29 , sizeof ( rtDW . fzv0yqelnv ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . cugzvh30un
) , rtdwData , 0 , 30 , sizeof ( rtDW . cugzvh30un ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . gcvb3rsm1a
) , rtdwData , 0 , 31 , sizeof ( rtDW . gcvb3rsm1a ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . ck5txcme1q
) , rtdwData , 0 , 32 , sizeof ( rtDW . ck5txcme1q ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . cqohevrabp
) , rtdwData , 0 , 33 , sizeof ( rtDW . cqohevrabp ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . hebcdzc552
) , rtdwData , 0 , 34 , sizeof ( rtDW . hebcdzc552 ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . k4jqdwwenf
. hjmucl1u2i ) , rtdwData , 0 , 35 , sizeof ( rtDW . k4jqdwwenf . hjmucl1u2i
) ) ; mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cxfwoerhvl . kc3n40mg45 ) , rtdwData , 0 , 36 , sizeof ( rtDW . cxfwoerhvl .
kc3n40mg45 ) ) ; mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & (
rtDW . ccf5xwtinim . kc3n40mg45 ) , rtdwData , 0 , 37 , sizeof ( rtDW .
ccf5xwtinim . kc3n40mg45 ) ) ; mr_Simulink_6DoF_RV_restoreDataFromMxArray ( (
void * ) & ( rtDW . dshipp4zhkp . hjmucl1u2i ) , rtdwData , 0 , 38 , sizeof (
rtDW . dshipp4zhkp . hjmucl1u2i ) ) ;
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW . dc1zceqmvb
. f0bl5viy3f ) , rtdwData , 0 , 39 , sizeof ( rtDW . dc1zceqmvb . f0bl5viy3f
) ) ; mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dc1zceqmvb . nlwa32a5p1 ) , rtdwData , 0 , 40 , sizeof ( rtDW . dc1zceqmvb .
nlwa32a5p1 ) ) ; mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & (
rtDW . eajtmfyznlk . f0bl5viy3f ) , rtdwData , 0 , 41 , sizeof ( rtDW .
eajtmfyznlk . f0bl5viy3f ) ) ; mr_Simulink_6DoF_RV_restoreDataFromMxArray ( (
void * ) & ( rtDW . eajtmfyznlk . nlwa32a5p1 ) , rtdwData , 0 , 42 , sizeof (
rtDW . eajtmfyznlk . nlwa32a5p1 ) ) ; }
mr_Simulink_6DoF_RV_restoreDataFromMxArray ( ( void * ) & ( rtPrevZCX ) ,
ssDW , 0 , 2 , sizeof ( rtPrevZCX ) ) ; } mxArray *
mr_Simulink_6DoF_RV_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 3 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 3 ] = { "Scope" , "Scope" , "MATLABSystem" , } ; static
const char * blockPath [ 3 ] = {
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Scope"
,
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action Subsystem/FA SMC/Scope"
, "Simulink_6DoF_RV/PLANT ASSETTO/Coordinate Transformation Conversion" , } ;
static const int reason [ 3 ] = { 0 , 0 , 5 , } ; for ( subs [ 0 ] = 0 ; subs
[ 0 ] < 3 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 38 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
5 ) ; ssSetNumBlocks ( rtS , 337 ) ; ssSetNumBlockIO ( rtS , 87 ) ;
ssSetNumBlockParams ( rtS , 261 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.01 ) ;
ssSetSampleTime ( rtS , 2 , 0.02 ) ; ssSetSampleTime ( rtS , 3 , 0.1 ) ;
ssSetSampleTime ( rtS , 4 , 1.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ;
ssSetOffsetTime ( rtS , 3 , 0.0 ) ; ssSetOffsetTime ( rtS , 4 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 4003974170U ) ;
ssSetChecksumVal ( rtS , 1 , 3916963272U ) ; ssSetChecksumVal ( rtS , 2 ,
2956464334U ) ; ssSetChecksumVal ( rtS , 3 , 1460834178U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 22 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
Simulink_6DoF_RV_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive (
rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "Simulink_6DoF_RV" ) ;
ssSetPath ( rtS , "Simulink_6DoF_RV" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 10000.0 ) ; ssSetStepSize ( rtS , 0.01 ) ;
ssSetFixedStepSize ( rtS , 0.01 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 3 , 3
, 1 , 1 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
3 , 3 , 1 , 3 , 1 , 100 } ; static int_T rt_LoggedStateNumDimensions [ ] = {
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = {
3 , 3 , 1 , 1 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 3 , 3 , 1 , 3 , 1 , 100 } ; static boolean_T rt_LoggedStateIsVarDims [
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
} ; static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = {
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "DSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"Simulink_6DoF_RV/PLANT ASSETTO/Eq. eulero/Integrator" ,
"Simulink_6DoF_RV/PLANT ASSETTO/quaternioni/Integrator1" ,
"Simulink_6DoF_RV/PLANT ASSETTO/quaternioni/Integrator" ,
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/pos_z" ,
"Simulink_6DoF_RV/REACTION WHEELS/Integrator" ,
"Simulink_6DoF_RV/REACTION WHEELS/Transfer Fcn" ,
"Simulink_6DoF_RV/REACTION WHEELS/Transfer Fcn1" ,
"Simulink_6DoF_RV/REACTION WHEELS/Transfer Fcn2" ,
"Simulink_6DoF_RV/REACTION WHEELS/Transfer Fcn3" ,
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/pos_x" ,
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/Pos_y" ,
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/Vel_x" ,
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/Vel_y" ,
"Simulink_6DoF_RV/PLANT POSIZIONE/HILL eqs/Vel_z" ,
"Simulink_6DoF_RV/THRUSTERS PWPF/Transfer Fcn" ,
"Simulink_6DoF_RV/THRUSTERS PWPF/Transfer Fcn1" ,
"Simulink_6DoF_RV/THRUSTERS PWPF/Transfer Fcn2" ,
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem1/Integrator" ,
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem2/Integrator" ,
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem3/Integrator" ,
"Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/Integrator" ,
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Pos z y/Integrator"
,
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Radial Boost1/ RB 2nd impulse control/Vel x/Integrator1"
,
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action\nSubsystem/FA straight line/Fx control/Subsystem/Integrator"
,
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action\nSubsystem/FA straight line/PID y & z control/Integrator"
,
 "Simulink_6DoF_RV/POSIZIONE/Position and Guidance/Final Approach/Switch Case Action\nSubsystem/FA straight line/Fx control/PD decelerazione/Integrator"
, "Simulink_6DoF_RV/POSIZIONE/Subsystem/Subsystem/end RB PID/Delay One Step"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "DSTATE" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 ,
2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 ,
19 , 20 , 21 , 22 , 23 , 24 , 25 , 0 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 27 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 27 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . dxtuyaluz3 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . ik0dzr1cdj [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . kvhquj55c5 ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . ocidwxjvrx ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . axvoa4r423 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . mdbvelmghb ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . crpmw3twun ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . l1xjnehgi1 ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . neo2mqf3bt ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . jic10dbq1f ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . noz00fbivj ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . jekvc2ve11 ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . pttwomnjcm ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . mqswwe5ci1 ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . drix1kumiq ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . jhoshwrqxl ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . l2kogmxgdl ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . gl5krc5x5s ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . bb235k43oy ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . i1zoxpzir0 ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . eax4rmgsbt ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . nbd1qufxdm [ 0 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . kjmkkonjji [ 0 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . gcykyioeio ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . m5rkhxaigz [ 0 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . nvgc5m55v3 ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) rtDW . pbcntez0ai ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 38 ] ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode4" ) ;
ssSetVariableStepSolver ( rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetTNextTid ( rtS , INT_MIN ) ; ssSetTNext ( rtS ,
rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ; ssSetNumNonsampledZCs ( rtS ,
0 ) ; ssSetContStateDisabled ( rtS , contStatesDisabled ) ; } { ZCSigState *
zc = ( ZCSigState * ) & rtPrevZCX ; ssSetPrevZCSigState ( rtS , zc ) ; } {
rtPrevZCX . e2xzdpuu5e = POS_ZCSIG ; rtPrevZCX . fw2ck0v230 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . l2naw3tuvv = POS_ZCSIG ; rtPrevZCX .
hk2unzjfz1 = POS_ZCSIG ; rtPrevZCX . dd5sdusarj = POS_ZCSIG ; rtPrevZCX .
k4jqdwwenf . pfhwdxfwiq = UNINITIALIZED_ZCSIG ; rtPrevZCX . cxfwoerhvl .
evmjwlgigm = POS_ZCSIG ; rtPrevZCX . ccf5xwtinim . evmjwlgigm = POS_ZCSIG ;
rtPrevZCX . dshipp4zhkp . pfhwdxfwiq = UNINITIALIZED_ZCSIG ; }
ssSetChecksumVal ( rtS , 0 , 4003974170U ) ; ssSetChecksumVal ( rtS , 1 ,
3916963272U ) ; ssSetChecksumVal ( rtS , 2 , 2956464334U ) ; ssSetChecksumVal
( rtS , 3 , 1460834178U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 28 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = ( sysRanDType * ) &
rtDW . p1dcymrsjg ; systemRan [ 2 ] = ( sysRanDType * ) & rtDW . eib1ql3mz5 ;
systemRan [ 3 ] = ( sysRanDType * ) & rtDW . eib1ql3mz5 ; systemRan [ 4 ] = &
rtAlwaysEnabled ; systemRan [ 5 ] = ( sysRanDType * ) & rtDW . c2kre5vegc ;
systemRan [ 6 ] = ( sysRanDType * ) & rtDW . c2kre5vegc ; systemRan [ 7 ] = (
sysRanDType * ) & rtDW . m3xjl5v4ek ; systemRan [ 8 ] = ( sysRanDType * ) &
rtDW . hmqgd4txud ; systemRan [ 9 ] = ( sysRanDType * ) & rtDW . jaeylyrgwx ;
systemRan [ 10 ] = ( sysRanDType * ) & rtDW . nwewtro2a3 ; systemRan [ 11 ] =
( sysRanDType * ) & rtDW . mseu5hqjjq ; systemRan [ 12 ] = & rtAlwaysEnabled
; systemRan [ 13 ] = ( sysRanDType * ) & rtDW . iwzi5ohrsh ; systemRan [ 14 ]
= ( sysRanDType * ) & rtDW . eajtmfyznlk . f0bl5viy3f ; systemRan [ 15 ] = (
sysRanDType * ) & rtDW . pj4zmmvnm5 ; systemRan [ 16 ] = ( sysRanDType * ) &
rtDW . dc1zceqmvb . f0bl5viy3f ; systemRan [ 17 ] = ( sysRanDType * ) & rtDW
. c50xvzqtoq ; systemRan [ 18 ] = ( sysRanDType * ) & rtDW . nq0ujzvwsf ;
systemRan [ 19 ] = ( sysRanDType * ) & rtDW . dshipp4zhkp . hjmucl1u2i ;
systemRan [ 20 ] = ( sysRanDType * ) & rtDW . ccf5xwtinim . kc3n40mg45 ;
systemRan [ 21 ] = ( sysRanDType * ) & rtDW . pbbc0xzezp ; systemRan [ 22 ] =
( sysRanDType * ) & rtDW . cxfwoerhvl . kc3n40mg45 ; systemRan [ 23 ] = (
sysRanDType * ) & rtDW . k4jqdwwenf . hjmucl1u2i ; systemRan [ 24 ] = (
sysRanDType * ) & rtDW . dztoclg0sz ; systemRan [ 25 ] = ( sysRanDType * ) &
rtDW . d0ez1lmmyl ; systemRan [ 26 ] = ( sysRanDType * ) & rtDW . jdwdhk453l
; systemRan [ 27 ] = ( sysRanDType * ) & rtDW . jdwdhk453l ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Simulink_6DoF_RV_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_Simulink_6DoF_RV_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_Simulink_6DoF_RV_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 5 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID5 ( tid ) ; }
