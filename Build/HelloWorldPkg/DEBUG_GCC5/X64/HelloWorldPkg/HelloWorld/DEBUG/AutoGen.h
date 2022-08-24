/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_302eaee9_a693_4662_a796_7b7f64191711
#define _AUTOGENH_302eaee9_a693_4662_a796_7b7f64191711

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x302eaee9, 0xa693, 0x4662, {0xa7, 0x96, 0x7b, 0x7f, 0x64, 0x19, 0x17, 0x11}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xa89c308a, 0xbf1a, 0x43c8, {0x8c, 0x29, 0x0b, 0x75, 0xb0, 0xa4, 0xaf, 0x7c}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
UefiMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
