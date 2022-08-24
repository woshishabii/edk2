/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_FEA01457_E381_4135_9475_C6AFD0076C61
#define _AUTOGENH_FEA01457_E381_4135_9475_C6AFD0076C61

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xFEA01457, 0xE381, 0x4135, {0x94, 0x75, 0xC6, 0xAF, 0xD0, 0x07, 0x6C, 0x61}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xE1063286, 0x6C8C, 0x4c25, {0xAE, 0xF0, 0x67, 0xA9, 0xA5, 0xB6, 0xE6, 0xB6}}

// Guids
extern EFI_GUID gEfiCryptoPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEdkiiCryptoProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdCryptoServiceFamilyEnable  1U
#define _PCD_VALUE_PcdCryptoServiceFamilyEnable  (VOID *)_gPcd_FixedAtBuild_PcdCryptoServiceFamilyEnable
extern const UINT8 _gPcd_FixedAtBuild_PcdCryptoServiceFamilyEnable[88];
#define _PCD_GET_MODE_PTR_PcdCryptoServiceFamilyEnable  (VOID *)_gPcd_FixedAtBuild_PcdCryptoServiceFamilyEnable
#define _PCD_SIZE_PcdCryptoServiceFamilyEnable 88
#define _PCD_GET_MODE_SIZE_PcdCryptoServiceFamilyEnable  _PCD_SIZE_PcdCryptoServiceFamilyEnable 
//#define _PCD_SET_MODE_PTR_PcdCryptoServiceFamilyEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
CryptoDxeEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
