#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"uint8_T" , 15 , 1 } , { "juink5juvy" , 16 , 4 } , { "uint64_T" , 17 , 8 } ,
{ "int64_T" , 18 , 8 } , { "char_T" , 19 , 8 } , { "uchar_T" , 20 , 8 } , {
"time_T" , 21 , 8 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T
) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof (
int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) ,
sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof (
pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof (
int32_T ) , sizeof ( uint8_T ) , sizeof ( juink5juvy ) , sizeof ( uint64_T )
, sizeof ( int64_T ) , sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof (
time_T ) } ; static const char_T * rtDataTypeNames [ ] = { "real_T" ,
"real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" ,
"uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T"
, "timer_uint32_pair_T" , "physical_connection" , "uint8_T" , "juink5juvy" ,
"uint64_T" , "int64_T" , "char_T" , "uchar_T" , "time_T" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . nyh5k3mpjz
[ 0 ] ) , 0 , 0 , 157 } , { ( char_T * ) ( & rtB . aqehawlayk ) , 8 , 0 , 6 }
, { ( char_T * ) ( & rtB . k4jqdwwenf . bf4wrveec1 [ 0 ] ) , 0 , 0 , 3 } , {
( char_T * ) ( & rtB . cxfwoerhvl . eioznmeone [ 0 ] ) , 0 , 0 , 3 } , { (
char_T * ) ( & rtB . ccf5xwtinim . eioznmeone [ 0 ] ) , 0 , 0 , 3 } , { (
char_T * ) ( & rtB . dshipp4zhkp . bf4wrveec1 [ 0 ] ) , 0 , 0 , 3 } , { (
char_T * ) ( & rtDW . pbcntez0ai [ 0 ] ) , 0 , 0 , 109 } , { ( char_T * ) ( &
rtDW . gytj3aqnha . LoggedData ) , 11 , 0 , 17 } , { ( char_T * ) ( & rtDW .
pcijbklolg ) , 16 , 0 , 1 } , { ( char_T * ) ( & rtDW . gzz433zqvc ) , 2 , 0
, 22 } , { ( char_T * ) ( & rtDW . pbo1kim1gy ) , 8 , 0 , 8 } , { ( char_T *
) ( & rtDW . k4jqdwwenf . hjmucl1u2i ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . cxfwoerhvl . kc3n40mg45 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ccf5xwtinim . kc3n40mg45 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
dshipp4zhkp . hjmucl1u2i ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
dc1zceqmvb . f0bl5viy3f ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
dc1zceqmvb . nlwa32a5p1 ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
eajtmfyznlk . f0bl5viy3f ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
eajtmfyznlk . nlwa32a5p1 ) , 8 , 0 , 1 } } ; static DataTypeTransitionTable
rtBTransTable = { 19U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . FJ2_r4 ) , 0 , 0 , 244 } , {
( char_T * ) ( & rtP . Gain_Gain_nn0z0a2s0s ) , 15 , 0 , 1 } , { ( char_T * )
( & rtP . k4jqdwwenf . V_in_Y0 ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
cxfwoerhvl . V_fin_Y0 ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . ccf5xwtinim
. V_fin_Y0 ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP . dshipp4zhkp . V_in_Y0 )
, 0 , 0 , 1 } , { ( char_T * ) ( & rtP . dc1zceqmvb . IC_Value [ 0 ] ) , 0 ,
0 , 6 } , { ( char_T * ) ( & rtP . eajtmfyznlk . IC_Value [ 0 ] ) , 0 , 0 , 6
} } ; static DataTypeTransitionTable rtPTransTable = { 8U , rtPTransitions }
;
