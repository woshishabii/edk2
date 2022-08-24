/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiPei.h>
#include <Library/DebugLib.h>
#include <Library/PeimEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x2ad0fc59, 0x2314, 0x4bf3, {0x86, 0x33, 0x13, 0xfa, 0x22, 0xa6, 0x24, 0xa0}};

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEdkiiDscPlatformGuid = {0x37d7e986, 0xf7e9, 0x45c2, {0x80, 0x67, 0xe3, 0x71, 0x42, 0x1a, 0x62, 0x6c}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "PlatformPei";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gArmTokenSpaceGuid = { 0xBB11ECFE, 0x820F, 0x4968, { 0xBB, 0xA6, 0xF7, 0x6A, 0xFE, 0x30, 0x25, 0x96 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareFileSystem2Guid = { 0x8c8ce578, 0x8a3d, 0x4f1c, { 0x99, 0x35, 0x89, 0x61, 0x85, 0xc3, 0x2d, 0xd3 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocStackGuid = { 0x4ED4BF27, 0x4092, 0x42E9, { 0x80, 0x7D, 0x52, 0x7B, 0x1D, 0x00, 0xC9, 0xBD }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocBspStoreGuid = { 0x564B33CD, 0xC92A, 0x4593, { 0x90, 0xBF, 0x24, 0x73, 0xE4, 0x3C, 0x63, 0x22 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobMemoryAllocModuleGuid = { 0xF8E21975, 0x0899, 0x4F58, { 0xA4, 0xBE, 0x55, 0x25, 0xA9, 0xC6, 0xD7, 0x7A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gArmPlatformTokenSpaceGuid = { 0x9c0aaed4, 0x74c5, 0x4043, { 0xb4, 0x17, 0xa3, 0x22, 0x38, 0x14, 0xce, 0x76 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gArmVirtTokenSpaceGuid = { 0x0B6F5CA7, 0x4F53, 0x445A, { 0xB7, 0x6E, 0x2E, 0x36, 0x5B, 0x80, 0x63, 0x66 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEarlyPL011BaseAddressGuid = { 0xB199DEA9, 0xFD5C, 0x4A84, { 0x80, 0x82, 0x2F, 0x41, 0x70, 0x78, 0x03, 0x05 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gFdtHobGuid = { 0x16958446, 0x19B7, 0x480B, { 0xB0, 0x47, 0x74, 0x85, 0xAD, 0x3F, 0x71, 0x6D } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSecurityPkgTokenSpaceGuid = { 0xd3fb176, 0x9569, 0x4d51, { 0xa3, 0xef, 0x7d, 0x61, 0xc6, 0x4f, 0xea, 0xba }};

// PPIs
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiMasterBootModePpiGuid = { 0x7408d748, 0xfc8c, 0x4ee6, {0x92, 0x88, 0xc4, 0xbe, 0xc0, 0x92, 0xa4, 0x10 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiBootInRecoveryModePpiGuid = { 0x17ee496a, 0xd8e4, 0x4b9a, {0x94, 0xd1, 0xce, 0x82, 0x72, 0x30, 0x8, 0x50 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdPpiGuid = { 0x6e81c58, 0x4ad7, 0x44bc, { 0x83, 0x90, 0xf1, 0x2, 0x65, 0xf7, 0x24, 0x80 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiPcdPpiGuid = { 0x1f34d25, 0x4de2, 0x23ad, { 0x3f, 0xf3, 0x36, 0x35, 0x3f, 0xf3, 0x23, 0xf1 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoPpiGuid = { 0x4d8b155b, 0xc059, 0x4c8f, { 0x89, 0x26,  0x6, 0xfd, 0x43, 0x31, 0xdb, 0x8a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoPpiGuid = { 0xa60c6b59, 0xe459, 0x425d, { 0x9c, 0x69,  0xb, 0xcc, 0x9c, 0xb2, 0x7d, 0x81 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid = { 0x49edb1c1, 0xbf21, 0x4761, { 0xbb, 0x12, 0xeb, 0x0, 0x31, 0xaa, 0xbb, 0x39 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid = { 0xea7ca24b, 0xded5, 0x4dad, { 0xa3, 0x89, 0xbf, 0x82, 0x7e, 0x8f, 0x9b, 0x38 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gArmMpCoreInfoPpiGuid = { 0x6847cc74, 0xe9ec, 0x4f8f, {0xa2, 0x9d, 0xab, 0x44, 0xe7, 0x54, 0xa8, 0xfc} };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gOvmfTpmDiscoveredPpiGuid = {0xb9a61ad0, 0x2802, 0x41f3, {0xb5, 0x13, 0x96, 0x51, 0xce, 0x6b, 0xd5, 0x75}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPeiTpmInitializationDonePpiGuid = { 0xa030d115, 0x54dd, 0x447b, { 0x90, 0x64, 0xf2, 0x6, 0x88, 0x3d, 0x7c, 0xcc }};

// Definition of SkuId Array
GLOBAL_REMOVE_IF_UNREFERENCED UINT64 _gPcd_SkuId_Array[] = {0x0};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdFdBaseAddress = _PCD_VALUE_PcdFdBaseAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFdSize = _PCD_VALUE_PcdFdSize;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdFvBaseAddress = _PCD_VALUE_PcdFvBaseAddress;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFvSize = _PCD_VALUE_PcdFvSize;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdNormalMemoryNonshareableOverride  50U
#define _PCD_SIZE_PcdNormalMemoryNonshareableOverride 1
#define _PCD_GET_MODE_SIZE_PcdNormalMemoryNonshareableOverride  _PCD_SIZE_PcdNormalMemoryNonshareableOverride 
#define _PCD_VALUE_PcdNormalMemoryNonshareableOverride  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdNormalMemoryNonshareableOverride = _PCD_VALUE_PcdNormalMemoryNonshareableOverride;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdNormalMemoryNonshareableOverride;
#define _PCD_GET_MODE_BOOL_PcdNormalMemoryNonshareableOverride  _gPcd_FixedAtBuild_PcdNormalMemoryNonshareableOverride
//#define _PCD_SET_MODE_BOOL_PcdNormalMemoryNonshareableOverride  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVerifyNodeInList  204U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  183U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  180U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  184U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdControlFlowEnforcementPropertyMask  171U
#define _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 4
#define _PCD_GET_MODE_SIZE_PcdControlFlowEnforcementPropertyMask  _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 
#define _PCD_VALUE_PcdControlFlowEnforcementPropertyMask  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask = _PCD_VALUE_PcdControlFlowEnforcementPropertyMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask;
#define _PCD_GET_MODE_32_PcdControlFlowEnforcementPropertyMask  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask
//#define _PCD_SET_MODE_32_PcdControlFlowEnforcementPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpeculationBarrierType  187U
#define _PCD_SIZE_PcdSpeculationBarrierType 1
#define _PCD_GET_MODE_SIZE_PcdSpeculationBarrierType  _PCD_SIZE_PcdSpeculationBarrierType 
#define _PCD_VALUE_PcdSpeculationBarrierType  0x01U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSpeculationBarrierType = _PCD_VALUE_PcdSpeculationBarrierType;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSpeculationBarrierType;
#define _PCD_GET_MODE_8_PcdSpeculationBarrierType  _gPcd_FixedAtBuild_PcdSpeculationBarrierType
//#define _PCD_SET_MODE_8_PcdSpeculationBarrierType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUartDefaultReceiveFifoDepth  192U
#define _PCD_SIZE_PcdUartDefaultReceiveFifoDepth 2
#define _PCD_GET_MODE_SIZE_PcdUartDefaultReceiveFifoDepth  _PCD_SIZE_PcdUartDefaultReceiveFifoDepth 
#define _PCD_VALUE_PcdUartDefaultReceiveFifoDepth  1U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdUartDefaultReceiveFifoDepth = _PCD_VALUE_PcdUartDefaultReceiveFifoDepth;
extern const  UINT16  _gPcd_FixedAtBuild_PcdUartDefaultReceiveFifoDepth;
#define _PCD_GET_MODE_16_PcdUartDefaultReceiveFifoDepth  _gPcd_FixedAtBuild_PcdUartDefaultReceiveFifoDepth
//#define _PCD_SET_MODE_16_PcdUartDefaultReceiveFifoDepth  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSerialBaudRate  150U
#define _PCD_SIZE_PcdSerialBaudRate 4
#define _PCD_GET_MODE_SIZE_PcdSerialBaudRate  _PCD_SIZE_PcdSerialBaudRate 
#define _PCD_VALUE_PcdSerialBaudRate  115200U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdSerialBaudRate = _PCD_VALUE_PcdSerialBaudRate;
extern const  UINT32  _gPcd_FixedAtBuild_PcdSerialBaudRate;
#define _PCD_GET_MODE_32_PcdSerialBaudRate  _gPcd_FixedAtBuild_PcdSerialBaudRate
//#define _PCD_SET_MODE_32_PcdSerialBaudRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PL011UartInteger  31U
#define _PCD_SIZE_PL011UartInteger 4
#define _PCD_GET_MODE_SIZE_PL011UartInteger  _PCD_SIZE_PL011UartInteger 
#define _PCD_VALUE_PL011UartInteger  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PL011UartInteger = _PCD_VALUE_PL011UartInteger;
extern const  UINT32  _gPcd_FixedAtBuild_PL011UartInteger;
#define _PCD_GET_MODE_32_PL011UartInteger  _gPcd_FixedAtBuild_PL011UartInteger
//#define _PCD_SET_MODE_32_PL011UartInteger  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PL011UartFractional  30U
#define _PCD_SIZE_PL011UartFractional 4
#define _PCD_GET_MODE_SIZE_PL011UartFractional  _PCD_SIZE_PL011UartFractional 
#define _PCD_VALUE_PL011UartFractional  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PL011UartFractional = _PCD_VALUE_PL011UartFractional;
extern const  UINT32  _gPcd_FixedAtBuild_PL011UartFractional;
#define _PCD_GET_MODE_32_PL011UartFractional  _gPcd_FixedAtBuild_PL011UartFractional
//#define _PCD_SET_MODE_32_PL011UartFractional  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PL011UartRegOffsetVariant  32U
#define _PCD_SIZE_PL011UartRegOffsetVariant 1
#define _PCD_GET_MODE_SIZE_PL011UartRegOffsetVariant  _PCD_SIZE_PL011UartRegOffsetVariant 
#define _PCD_VALUE_PL011UartRegOffsetVariant  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PL011UartRegOffsetVariant = _PCD_VALUE_PL011UartRegOffsetVariant;
extern const  UINT8  _gPcd_FixedAtBuild_PL011UartRegOffsetVariant;
#define _PCD_GET_MODE_8_PL011UartRegOffsetVariant  _gPcd_FixedAtBuild_PL011UartRegOffsetVariant
//#define _PCD_SET_MODE_8_PL011UartRegOffsetVariant  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  173U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x8000004FU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUartDefaultBaudRate  189U
#define _PCD_SIZE_PcdUartDefaultBaudRate 8
#define _PCD_GET_MODE_SIZE_PcdUartDefaultBaudRate  _PCD_SIZE_PcdUartDefaultBaudRate 
#define _PCD_VALUE_PcdUartDefaultBaudRate  38400ULL
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdUartDefaultBaudRate = _PCD_VALUE_PcdUartDefaultBaudRate;
extern const  UINT64  _gPcd_FixedAtBuild_PcdUartDefaultBaudRate;
#define _PCD_GET_MODE_64_PcdUartDefaultBaudRate  _gPcd_FixedAtBuild_PcdUartDefaultBaudRate
//#define _PCD_SET_MODE_64_PcdUartDefaultBaudRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUartDefaultDataBits  190U
#define _PCD_SIZE_PcdUartDefaultDataBits 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultDataBits  _PCD_SIZE_PcdUartDefaultDataBits 
#define _PCD_VALUE_PcdUartDefaultDataBits  8U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdUartDefaultDataBits = _PCD_VALUE_PcdUartDefaultDataBits;
extern const  UINT8  _gPcd_FixedAtBuild_PcdUartDefaultDataBits;
#define _PCD_GET_MODE_8_PcdUartDefaultDataBits  _gPcd_FixedAtBuild_PcdUartDefaultDataBits
//#define _PCD_SET_MODE_8_PcdUartDefaultDataBits  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUartDefaultParity  191U
#define _PCD_SIZE_PcdUartDefaultParity 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultParity  _PCD_SIZE_PcdUartDefaultParity 
#define _PCD_VALUE_PcdUartDefaultParity  1U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdUartDefaultParity = _PCD_VALUE_PcdUartDefaultParity;
extern const  UINT8  _gPcd_FixedAtBuild_PcdUartDefaultParity;
#define _PCD_GET_MODE_8_PcdUartDefaultParity  _gPcd_FixedAtBuild_PcdUartDefaultParity
//#define _PCD_SET_MODE_8_PcdUartDefaultParity  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUartDefaultStopBits  193U
#define _PCD_SIZE_PcdUartDefaultStopBits 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultStopBits  _PCD_SIZE_PcdUartDefaultStopBits 
#define _PCD_VALUE_PcdUartDefaultStopBits  1U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdUartDefaultStopBits = _PCD_VALUE_PcdUartDefaultStopBits;
extern const  UINT8  _gPcd_FixedAtBuild_PcdUartDefaultStopBits;
#define _PCD_GET_MODE_8_PcdUartDefaultStopBits  _gPcd_FixedAtBuild_PcdUartDefaultStopBits
//#define _PCD_SET_MODE_8_PcdUartDefaultStopBits  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PL011UartClkInHz  29U
#define _PCD_SIZE_PL011UartClkInHz 4
#define _PCD_GET_MODE_SIZE_PL011UartClkInHz  _PCD_SIZE_PL011UartClkInHz 
#define _PCD_VALUE_PL011UartClkInHz  24000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PL011UartClkInHz = _PCD_VALUE_PL011UartClkInHz;
extern const  UINT32  _gPcd_FixedAtBuild_PL011UartClkInHz;
#define _PCD_GET_MODE_32_PL011UartClkInHz  _gPcd_FixedAtBuild_PL011UartClkInHz
//#define _PCD_SET_MODE_32_PL011UartClkInHz  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDeviceTreeInitialBaseAddress  57U
#define _PCD_SIZE_PcdDeviceTreeInitialBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdDeviceTreeInitialBaseAddress  _PCD_SIZE_PcdDeviceTreeInitialBaseAddress 
#define _PCD_VALUE_PcdDeviceTreeInitialBaseAddress  0x40000000ULL
GLOBAL_REMOVE_IF_UNREFERENCED const UINT64 _gPcd_FixedAtBuild_PcdDeviceTreeInitialBaseAddress = _PCD_VALUE_PcdDeviceTreeInitialBaseAddress;
extern const  UINT64  _gPcd_FixedAtBuild_PcdDeviceTreeInitialBaseAddress;
#define _PCD_GET_MODE_64_PcdDeviceTreeInitialBaseAddress  _gPcd_FixedAtBuild_PcdDeviceTreeInitialBaseAddress
//#define _PCD_SET_MODE_64_PcdDeviceTreeInitialBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  172U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  174U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x2fU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  178U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmPrimaryCoreMask  43U
#define _PCD_SIZE_PcdArmPrimaryCoreMask 4
#define _PCD_GET_MODE_SIZE_PcdArmPrimaryCoreMask  _PCD_SIZE_PcdArmPrimaryCoreMask 
#define _PCD_VALUE_PcdArmPrimaryCoreMask  0xF03U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask = _PCD_VALUE_PcdArmPrimaryCoreMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask;
#define _PCD_GET_MODE_32_PcdArmPrimaryCoreMask  _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask
//#define _PCD_SET_MODE_32_PcdArmPrimaryCoreMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdArmPrimaryCore  42U
#define _PCD_SIZE_PcdArmPrimaryCore 4
#define _PCD_GET_MODE_SIZE_PcdArmPrimaryCore  _PCD_SIZE_PcdArmPrimaryCore 
#define _PCD_VALUE_PcdArmPrimaryCore  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCore = _PCD_VALUE_PcdArmPrimaryCore;
extern const  UINT32  _gPcd_FixedAtBuild_PcdArmPrimaryCore;
#define _PCD_GET_MODE_32_PcdArmPrimaryCore  _gPcd_FixedAtBuild_PcdArmPrimaryCore
//#define _PCD_SET_MODE_32_PcdArmPrimaryCore  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDeviceTreeAllocationPadding  56U
#define _PCD_SIZE_PcdDeviceTreeAllocationPadding 4
#define _PCD_GET_MODE_SIZE_PcdDeviceTreeAllocationPadding  _PCD_SIZE_PcdDeviceTreeAllocationPadding 
#define _PCD_VALUE_PcdDeviceTreeAllocationPadding  256U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDeviceTreeAllocationPadding = _PCD_VALUE_PcdDeviceTreeAllocationPadding;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDeviceTreeAllocationPadding;
#define _PCD_GET_MODE_32_PcdDeviceTreeAllocationPadding  _gPcd_FixedAtBuild_PcdDeviceTreeAllocationPadding
//#define _PCD_SET_MODE_32_PcdDeviceTreeAllocationPadding  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTpm2SupportEnabled  59U
#define _PCD_SIZE_PcdTpm2SupportEnabled 1
#define _PCD_GET_MODE_SIZE_PcdTpm2SupportEnabled  _PCD_SIZE_PcdTpm2SupportEnabled 
#define _PCD_VALUE_PcdTpm2SupportEnabled  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdTpm2SupportEnabled = _PCD_VALUE_PcdTpm2SupportEnabled;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdTpm2SupportEnabled;
#define _PCD_GET_MODE_BOOL_PcdTpm2SupportEnabled  _gPcd_FixedAtBuild_PcdTpm2SupportEnabled
//#define _PCD_SET_MODE_BOOL_PcdTpm2SupportEnabled  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTpmBaseAddress  2U
#define _PCD_GET_MODE_64_PcdTpmBaseAddress  LibPcdGet64(_PCD_TOKEN_PcdTpmBaseAddress)
#define _PCD_GET_MODE_SIZE_PcdTpmBaseAddress  LibPcdGetSize(_PCD_TOKEN_PcdTpmBaseAddress)
#define _PCD_SET_MODE_64_PcdTpmBaseAddress(Value)  LibPcdSet64(_PCD_TOKEN_PcdTpmBaseAddress, (Value))
#define _PCD_SET_MODE_64_S_PcdTpmBaseAddress(Value)  LibPcdSet64S(_PCD_TOKEN_PcdTpmBaseAddress, (Value))


RETURN_STATUS
EFIAPI
BaseDebugLibSerialPortConstructor (
  VOID
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{
  EFI_STATUS  Status;

  Status = BaseDebugLibSerialPortConstructor ();
  ASSERT_RETURN_ERROR (Status);

}



VOID
EFIAPI
ProcessLibraryDestructorList (
  IN       EFI_PEI_FILE_HANDLE       FileHandle,
  IN CONST EFI_PEI_SERVICES          **PeiServices
  )
{

}

GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPeimRevision = 0x00000000U;

EFI_STATUS
EFIAPI
ProcessModuleEntryPointList (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  )

{
  return InitializePlatformPeim (FileHandle, PeiServices);
}


GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gDriverUnloadImageCount = 0U;

EFI_STATUS
EFIAPI
ProcessModuleUnloadList (
  IN EFI_HANDLE        ImageHandle
  )
{
  return EFI_SUCCESS;
}
