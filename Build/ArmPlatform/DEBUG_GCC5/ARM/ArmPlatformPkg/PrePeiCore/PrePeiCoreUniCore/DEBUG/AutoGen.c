/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiPei.h>
#include <Library/DebugLib.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x469fc080, 0xaec1, 0x11df, {0x92, 0x7c, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b}};

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEdkiiDscPlatformGuid = {0x9ce08891, 0xac9c, 0x476d, {0xab, 0x04, 0x0c, 0x04, 0xd3, 0xa9, 0x75, 0x44}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "ArmPlatformPrePeiCore";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gArmTokenSpaceGuid = { 0xBB11ECFE, 0x820F, 0x4968, { 0xBB, 0xA6, 0xF7, 0x6A, 0xFE, 0x30, 0x25, 0x96 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gArmPlatformTokenSpaceGuid = { 0x9c0aaed4, 0x74c5, 0x4043, { 0xb4, 0x17, 0xa3, 0x22, 0x38, 0x14, 0xce, 0x76 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiTemporaryRamSupportPpiGuid = { 0xdbe23aa9, 0xa345, 0x4b97, {0x85, 0xb6, 0xb2, 0x26, 0xf1, 0x61, 0x73, 0x89} };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gArmMpCoreInfoPpiGuid = { 0x6847cc74, 0xe9ec, 0x4f8f, {0xa2, 0x9d, 0xab, 0x44, 0xe7, 0x54, 0xa8, 0xfc} };

// Definition of SkuId Array
GLOBAL_REMOVE_IF_UNREFERENCED UINT64 _gPcd_SkuId_Array[] = {0x0};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdFvBaseAddress = _PCD_VALUE_PcdFvBaseAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFvSize = _PCD_VALUE_PcdFvSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdVFPEnabled = _PCD_VALUE_PcdVFPEnabled;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdCPUCoresStackBase = _PCD_VALUE_PcdCPUCoresStackBase;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCPUCorePrimaryStackSize = _PCD_VALUE_PcdCPUCorePrimaryStackSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdCPUCoreSecondaryStackSize = _PCD_VALUE_PcdCPUCoreSecondaryStackSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdInitValueInTempStack = _PCD_VALUE_PcdInitValueInTempStack;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdSendSgiToBringUpSecondaryCores = _PCD_VALUE_PcdSendSgiToBringUpSecondaryCores;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdVerifyNodeInList  67U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  56U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  53U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  57U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdControlFlowEnforcementPropertyMask  49U
#define _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 4
#define _PCD_GET_MODE_SIZE_PcdControlFlowEnforcementPropertyMask  _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 
#define _PCD_VALUE_PcdControlFlowEnforcementPropertyMask  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask = _PCD_VALUE_PcdControlFlowEnforcementPropertyMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask;
#define _PCD_GET_MODE_32_PcdControlFlowEnforcementPropertyMask  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask
//#define _PCD_SET_MODE_32_PcdControlFlowEnforcementPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpeculationBarrierType  59U
#define _PCD_SIZE_PcdSpeculationBarrierType 1
#define _PCD_GET_MODE_SIZE_PcdSpeculationBarrierType  _PCD_SIZE_PcdSpeculationBarrierType 
#define _PCD_VALUE_PcdSpeculationBarrierType  0x01U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSpeculationBarrierType = _PCD_VALUE_PcdSpeculationBarrierType;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSpeculationBarrierType;
#define _PCD_GET_MODE_8_PcdSpeculationBarrierType  _gPcd_FixedAtBuild_PcdSpeculationBarrierType
//#define _PCD_SET_MODE_8_PcdSpeculationBarrierType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  50U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdNormalMemoryNonshareableOverride  33U
#define _PCD_SIZE_PcdNormalMemoryNonshareableOverride 1
#define _PCD_GET_MODE_SIZE_PcdNormalMemoryNonshareableOverride  _PCD_SIZE_PcdNormalMemoryNonshareableOverride 
#define _PCD_VALUE_PcdNormalMemoryNonshareableOverride  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdNormalMemoryNonshareableOverride = _PCD_VALUE_PcdNormalMemoryNonshareableOverride;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdNormalMemoryNonshareableOverride;
#define _PCD_GET_MODE_BOOL_PcdNormalMemoryNonshareableOverride  _gPcd_FixedAtBuild_PcdNormalMemoryNonshareableOverride
//#define _PCD_SET_MODE_BOOL_PcdNormalMemoryNonshareableOverride  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmPrimaryCoreMask  25U
#define _PCD_SIZE_PcdArmPrimaryCoreMask 4
#define _PCD_GET_MODE_SIZE_PcdArmPrimaryCoreMask  _PCD_SIZE_PcdArmPrimaryCoreMask 
#define _PCD_VALUE_PcdArmPrimaryCoreMask  0xF03U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask = _PCD_VALUE_PcdArmPrimaryCoreMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask;
#define _PCD_GET_MODE_32_PcdArmPrimaryCoreMask  _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask
//#define _PCD_SET_MODE_32_PcdArmPrimaryCoreMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmPrimaryCore  24U
#define _PCD_SIZE_PcdArmPrimaryCore 4
#define _PCD_GET_MODE_SIZE_PcdArmPrimaryCore  _PCD_SIZE_PcdArmPrimaryCore 
#define _PCD_VALUE_PcdArmPrimaryCore  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCore = _PCD_VALUE_PcdArmPrimaryCore;
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmPrimaryCore;
#define _PCD_GET_MODE_32_PcdArmPrimaryCore  _gPcd_FixedAtBuild_PcdArmPrimaryCore
//#define _PCD_SET_MODE_32_PcdArmPrimaryCore  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD



VOID
EFIAPI
ProcessLibraryConstructorList (
  VOID
  )
{

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  VOID
  )
{

}
