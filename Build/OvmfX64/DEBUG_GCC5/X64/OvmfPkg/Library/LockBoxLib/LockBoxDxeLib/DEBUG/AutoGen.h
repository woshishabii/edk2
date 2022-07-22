/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_f61c9a34_2e18_44ce_af2f_21a998e64fda
#define _AUTOGENH_f61c9a34_2e18_44ce_af2f_21a998e64fda

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiLockBoxProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdSmmSmramRequire  288U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdSmmSmramRequire;
#define _PCD_GET_MODE_BOOL_PcdSmmSmramRequire  _gPcd_FixedAtBuild_PcdSmmSmramRequire
//#define _PCD_SET_MODE_BOOL_PcdSmmSmramRequire  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_TOKEN_PcdOvmfLockBoxStorageBase  271U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageBase;
#define _PCD_GET_MODE_32_PcdOvmfLockBoxStorageBase  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageBase
//#define _PCD_SET_MODE_32_PcdOvmfLockBoxStorageBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfLockBoxStorageBase 0x00806000
#define _PCD_SIZE_PcdOvmfLockBoxStorageBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfLockBoxStorageBase _PCD_SIZE_PcdOvmfLockBoxStorageBase
#define _PCD_TOKEN_PcdOvmfLockBoxStorageSize  272U
extern const UINT32 _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageSize;
#define _PCD_GET_MODE_32_PcdOvmfLockBoxStorageSize  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageSize
//#define _PCD_SET_MODE_32_PcdOvmfLockBoxStorageSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdOvmfLockBoxStorageSize 0x00001000
#define _PCD_SIZE_PcdOvmfLockBoxStorageSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfLockBoxStorageSize _PCD_SIZE_PcdOvmfLockBoxStorageSize

EFI_STATUS
EFIAPI
LockBoxDxeLibInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
