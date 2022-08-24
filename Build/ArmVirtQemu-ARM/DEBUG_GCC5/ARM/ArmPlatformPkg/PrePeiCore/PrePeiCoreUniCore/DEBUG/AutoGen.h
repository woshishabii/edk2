/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_469fc080_aec1_11df_927c_0002a5d5c51b
#define _AUTOGENH_469fc080_aec1_11df_927c_0002a5d5c51b

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x469fc080, 0xaec1, 0x11df, {0x92, 0x7c, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x37d7e986, 0xf7e9, 0x45c2, {0x80, 0x67, 0xe3, 0x71, 0x42, 0x1a, 0x62, 0x6c}}

// Guids
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gArmVirtTokenSpaceGuid;

// PPIs
extern EFI_GUID gEfiTemporaryRamSupportPpiGuid;
extern EFI_GUID gArmMpCoreInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFvBaseAddress  48U
#define _PCD_SIZE_PcdFvBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdFvBaseAddress  _PCD_SIZE_PcdFvBaseAddress 
#define _PCD_VALUE_PcdFvBaseAddress  0x00001000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdFvBaseAddress;
#define _PCD_GET_MODE_64_PcdFvBaseAddress  _gPcd_FixedAtBuild_PcdFvBaseAddress
//#define _PCD_SET_MODE_64_PcdFvBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFvSize  49U
#define _PCD_SIZE_PcdFvSize 4
#define _PCD_GET_MODE_SIZE_PcdFvSize  _PCD_SIZE_PcdFvSize 
#define _PCD_VALUE_PcdFvSize  0x001FF000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFvSize;
#define _PCD_GET_MODE_32_PcdFvSize  _gPcd_FixedAtBuild_PcdFvSize
//#define _PCD_SET_MODE_32_PcdFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVFPEnabled  55U
#define _PCD_SIZE_PcdVFPEnabled 4
#define _PCD_GET_MODE_SIZE_PcdVFPEnabled  _PCD_SIZE_PcdVFPEnabled 
#define _PCD_VALUE_PcdVFPEnabled  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVFPEnabled;
#define _PCD_GET_MODE_32_PcdVFPEnabled  _gPcd_FixedAtBuild_PcdVFPEnabled
//#define _PCD_SET_MODE_32_PcdVFPEnabled  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCPUCoresStackBase  35U
#define _PCD_SIZE_PcdCPUCoresStackBase 8
#define _PCD_GET_MODE_SIZE_PcdCPUCoresStackBase  _PCD_SIZE_PcdCPUCoresStackBase 
#define _PCD_VALUE_PcdCPUCoresStackBase  0x4007c000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdCPUCoresStackBase;
#define _PCD_GET_MODE_64_PcdCPUCoresStackBase  _gPcd_FixedAtBuild_PcdCPUCoresStackBase
//#define _PCD_SET_MODE_64_PcdCPUCoresStackBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCPUCorePrimaryStackSize  33U
#define _PCD_SIZE_PcdCPUCorePrimaryStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCPUCorePrimaryStackSize  _PCD_SIZE_PcdCPUCorePrimaryStackSize 
#define _PCD_VALUE_PcdCPUCorePrimaryStackSize  0x4000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCPUCorePrimaryStackSize;
#define _PCD_GET_MODE_32_PcdCPUCorePrimaryStackSize  _gPcd_FixedAtBuild_PcdCPUCorePrimaryStackSize
//#define _PCD_SET_MODE_32_PcdCPUCorePrimaryStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCPUCoreSecondaryStackSize  34U
#define _PCD_SIZE_PcdCPUCoreSecondaryStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCPUCoreSecondaryStackSize  _PCD_SIZE_PcdCPUCoreSecondaryStackSize 
#define _PCD_VALUE_PcdCPUCoreSecondaryStackSize  0x1000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCPUCoreSecondaryStackSize;
#define _PCD_GET_MODE_32_PcdCPUCoreSecondaryStackSize  _gPcd_FixedAtBuild_PcdCPUCoreSecondaryStackSize
//#define _PCD_SET_MODE_32_PcdCPUCoreSecondaryStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdInitValueInTempStack  116U
#define _PCD_SIZE_PcdInitValueInTempStack 4
#define _PCD_GET_MODE_SIZE_PcdInitValueInTempStack  _PCD_SIZE_PcdInitValueInTempStack 
#define _PCD_VALUE_PcdInitValueInTempStack  0x5AA55AA5U
extern const  UINT32  _gPcd_FixedAtBuild_PcdInitValueInTempStack;
#define _PCD_GET_MODE_32_PcdInitValueInTempStack  _gPcd_FixedAtBuild_PcdInitValueInTempStack
//#define _PCD_SET_MODE_32_PcdInitValueInTempStack  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSendSgiToBringUpSecondaryCores  38U
#define _PCD_SIZE_PcdSendSgiToBringUpSecondaryCores 1
#define _PCD_GET_MODE_SIZE_PcdSendSgiToBringUpSecondaryCores  _PCD_SIZE_PcdSendSgiToBringUpSecondaryCores 
#define _PCD_VALUE_PcdSendSgiToBringUpSecondaryCores  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSendSgiToBringUpSecondaryCores;
#define _PCD_GET_MODE_BOOL_PcdSendSgiToBringUpSecondaryCores  _gPcd_FixedAtBuild_PcdSendSgiToBringUpSecondaryCores
//#define _PCD_SET_MODE_BOOL_PcdSendSgiToBringUpSecondaryCores  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


#ifdef __cplusplus
}
#endif

#endif
