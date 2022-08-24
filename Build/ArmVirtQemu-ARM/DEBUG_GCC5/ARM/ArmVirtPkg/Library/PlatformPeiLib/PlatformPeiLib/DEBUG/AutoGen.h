/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_59C11815_F8DA_4F49_B4FB_EC1E41ED1F06
#define _AUTOGENH_59C11815_F8DA_4F49_B4FB_EC1E41ED1F06

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEarlyPL011BaseAddressGuid;
extern GUID gFdtHobGuid;
extern GUID gArmTokenSpaceGuid;
extern GUID gArmVirtTokenSpaceGuid;
extern GUID gEfiSecurityPkgTokenSpaceGuid;

// PPIs
extern GUID gOvmfTpmDiscoveredPpiGuid;
extern GUID gPeiTpmInitializationDonePpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdFvSize  49U
extern const UINT32 _gPcd_FixedAtBuild_PcdFvSize;
#define _PCD_GET_MODE_32_PcdFvSize  _gPcd_FixedAtBuild_PcdFvSize
//#define _PCD_SET_MODE_32_PcdFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFvSize 0x001FF000
#define _PCD_SIZE_PcdFvSize 4
#define _PCD_GET_MODE_SIZE_PcdFvSize _PCD_SIZE_PcdFvSize
#define _PCD_TOKEN_PcdDeviceTreeAllocationPadding  56U
extern const UINT32 _gPcd_FixedAtBuild_PcdDeviceTreeAllocationPadding;
#define _PCD_GET_MODE_32_PcdDeviceTreeAllocationPadding  _gPcd_FixedAtBuild_PcdDeviceTreeAllocationPadding
//#define _PCD_SET_MODE_32_PcdDeviceTreeAllocationPadding  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDeviceTreeAllocationPadding 256
#define _PCD_SIZE_PcdDeviceTreeAllocationPadding 4
#define _PCD_GET_MODE_SIZE_PcdDeviceTreeAllocationPadding _PCD_SIZE_PcdDeviceTreeAllocationPadding
#define _PCD_TOKEN_PcdTpm2SupportEnabled  59U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdTpm2SupportEnabled;
#define _PCD_GET_MODE_BOOL_PcdTpm2SupportEnabled  _gPcd_FixedAtBuild_PcdTpm2SupportEnabled
//#define _PCD_SET_MODE_BOOL_PcdTpm2SupportEnabled  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_TOKEN_PcdFvBaseAddress  48U
extern const UINT64 _gPcd_FixedAtBuild_PcdFvBaseAddress;
#define _PCD_GET_MODE_64_PcdFvBaseAddress  _gPcd_FixedAtBuild_PcdFvBaseAddress
//#define _PCD_SET_MODE_64_PcdFvBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFvBaseAddress 0x00001000
#define _PCD_SIZE_PcdFvBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdFvBaseAddress _PCD_SIZE_PcdFvBaseAddress
#define _PCD_TOKEN_PcdDeviceTreeInitialBaseAddress  57U
extern const UINT64 _gPcd_FixedAtBuild_PcdDeviceTreeInitialBaseAddress;
#define _PCD_GET_MODE_64_PcdDeviceTreeInitialBaseAddress  _gPcd_FixedAtBuild_PcdDeviceTreeInitialBaseAddress
//#define _PCD_SET_MODE_64_PcdDeviceTreeInitialBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDeviceTreeInitialBaseAddress 0x40000000
#define _PCD_SIZE_PcdDeviceTreeInitialBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdDeviceTreeInitialBaseAddress _PCD_SIZE_PcdDeviceTreeInitialBaseAddress
#define _PCD_TOKEN_PcdTpmBaseAddress  2U
#define _PCD_GET_MODE_64_PcdTpmBaseAddress  LibPcdGet64(_PCD_TOKEN_PcdTpmBaseAddress)
#define _PCD_GET_MODE_SIZE_PcdTpmBaseAddress  LibPcdGetSize(_PCD_TOKEN_PcdTpmBaseAddress)
#define _PCD_SET_MODE_64_PcdTpmBaseAddress(Value)  LibPcdSet64(_PCD_TOKEN_PcdTpmBaseAddress, (Value))
#define _PCD_SET_MODE_64_S_PcdTpmBaseAddress(Value)  LibPcdSet64S(_PCD_TOKEN_PcdTpmBaseAddress, (Value))


#ifdef __cplusplus
}
#endif

#endif
