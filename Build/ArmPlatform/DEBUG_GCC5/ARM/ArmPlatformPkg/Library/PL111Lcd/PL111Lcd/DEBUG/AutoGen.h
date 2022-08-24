/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_407B4008_BF5B_11DF_9547_CF16E0D72085
#define _AUTOGENH_407B4008_BF5B_11DF_9547_CF16E0D72085

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmPlatformTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPL111LcdBase  17U
extern const UINT32 _gPcd_FixedAtBuild_PcdPL111LcdBase;
#define _PCD_GET_MODE_32_PcdPL111LcdBase  _gPcd_FixedAtBuild_PcdPL111LcdBase
//#define _PCD_SET_MODE_32_PcdPL111LcdBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPL111LcdBase 0x0
#define _PCD_SIZE_PcdPL111LcdBase 4
#define _PCD_GET_MODE_SIZE_PcdPL111LcdBase _PCD_SIZE_PcdPL111LcdBase


#ifdef __cplusplus
}
#endif

#endif
