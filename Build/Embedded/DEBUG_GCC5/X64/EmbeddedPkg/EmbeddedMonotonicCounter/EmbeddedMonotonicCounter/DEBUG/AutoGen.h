/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_FCABE6A7_7953_4A84_B7EC_D29E89B62E87
#define _AUTOGENH_FCABE6A7_7953_4A84_B7EC_D29E89B62E87

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xFCABE6A7, 0x7953, 0x4A84, {0xB7, 0xEC, 0xD2, 0x9E, 0x89, 0xB6, 0x2E, 0x87}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x8DBB580B, 0xCF89, 0x4D57, {0x95, 0xC6, 0xDF, 0xE9, 0x6C, 0x44, 0x68, 0x6E}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiMonotonicCounterArchProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
MonotonicCounterDriverInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
