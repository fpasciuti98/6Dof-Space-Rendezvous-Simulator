#include "Simulink_6DoF_RV_capi_host.h"
static Simulink_6DoF_RV_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Simulink_6DoF_RV_host_InitializeDataMapInfo(&(root), "Simulink_6DoF_RV");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
