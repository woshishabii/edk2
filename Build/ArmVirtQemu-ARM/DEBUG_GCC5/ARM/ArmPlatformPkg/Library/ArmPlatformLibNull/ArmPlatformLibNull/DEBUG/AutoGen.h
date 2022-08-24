/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_cb494bad_23ff_427e_8608_d7e138d3363b
#define _AUTOGENH_cb494bad_23ff_427e_8608_d7e138d3363b

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmTokenSpaceGuid;

// PPIs
extern GUID gArmMpCoreInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdArmPrimaryCoreMask  43U
extern const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask;
#define _PCD_GET_MODE_32_PcdArmPrimaryCoreMask  _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask
//#define _PCD_SET_MODE_32_PcdArmPrimaryCoreMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdArmPrimaryCoreMask 0xF03
#define _PCD_SIZE_PcdArmPrimaryCoreMask 4
#define _PCD_GET_MODE_SIZE_PcdArmPrimaryCoreMask _PCD_SIZE_PcdArmPrimaryCoreMask
#define _PCD_TOKEN_PcdArmPrimaryCore  42U
extern const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCore;
#define _PCD_GET_MODE_32_PcdArmPrimaryCore  _gPcd_FixedAtBuild_PcdArmPrimaryCore
//#define _PCD_SET_MODE_32_PcdArmPrimaryCore  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdArmPrimaryCore 0
#define _PCD_SIZE_PcdArmPrimaryCore 4
#define _PCD_GET_MODE_SIZE_PcdArmPrimaryCore _PCD_SIZE_PcdArmPrimaryCore


#ifdef __cplusplus
}
#endif

#endif
