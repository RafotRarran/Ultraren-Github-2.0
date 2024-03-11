// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NISBlueprint/Public/NISLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNISLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NISBLUEPRINT_API UClass* Z_Construct_UClass_UNISLibrary();
	NISBLUEPRINT_API UClass* Z_Construct_UClass_UNISLibrary_NoRegister();
	NISBLUEPRINT_API UEnum* Z_Construct_UEnum_NISBlueprint_UNISMode();
	NISBLUEPRINT_API UEnum* Z_Construct_UEnum_NISBlueprint_UNISSupport();
	UPackage* Z_Construct_UPackage__Script_NISBlueprint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UNISSupport;
	static UEnum* UNISSupport_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UNISSupport.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UNISSupport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NISBlueprint_UNISSupport, (UObject*)Z_Construct_UPackage__Script_NISBlueprint(), TEXT("UNISSupport"));
		}
		return Z_Registration_Info_UEnum_UNISSupport.OuterSingleton;
	}
	template<> NISBLUEPRINT_API UEnum* StaticEnum<UNISSupport>()
	{
		return UNISSupport_StaticEnum();
	}
	struct Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::Enumerators[] = {
		{ "UNISSupport::Supported", (int64)UNISSupport::Supported },
		{ "UNISSupport::NotSupported", (int64)UNISSupport::NotSupported },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
		{ "NotSupported.DisplayName", "Not Supported due to insufficient RHI Feature Level" },
		{ "NotSupported.Name", "UNISSupport::NotSupported" },
		{ "Supported.DisplayName", "Supported" },
		{ "Supported.Name", "UNISSupport::Supported" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NISBlueprint,
		nullptr,
		"UNISSupport",
		"UNISSupport",
		Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NISBlueprint_UNISSupport()
	{
		if (!Z_Registration_Info_UEnum_UNISSupport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UNISSupport.InnerSingleton, Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UNISSupport.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UNISMode;
	static UEnum* UNISMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UNISMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UNISMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NISBlueprint_UNISMode, (UObject*)Z_Construct_UPackage__Script_NISBlueprint(), TEXT("UNISMode"));
		}
		return Z_Registration_Info_UEnum_UNISMode.OuterSingleton;
	}
	template<> NISBLUEPRINT_API UEnum* StaticEnum<UNISMode>()
	{
		return UNISMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NISBlueprint_UNISMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::Enumerators[] = {
		{ "UNISMode::Off", (int64)UNISMode::Off },
		{ "UNISMode::UltraQuality", (int64)UNISMode::UltraQuality },
		{ "UNISMode::Quality", (int64)UNISMode::Quality },
		{ "UNISMode::Balanced", (int64)UNISMode::Balanced },
		{ "UNISMode::Performance", (int64)UNISMode::Performance },
		{ "UNISMode::Custom", (int64)UNISMode::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::Enum_MetaDataParams[] = {
		{ "Balanced.DisplayName", "Balanced" },
		{ "Balanced.Name", "UNISMode::Balanced" },
		{ "BlueprintType", "true" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "UNISMode::Custom" },
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "UNISMode::Off" },
		{ "Performance.DisplayName", "Performance" },
		{ "Performance.Name", "UNISMode::Performance" },
		{ "Quality.DisplayName", "Quality" },
		{ "Quality.Name", "UNISMode::Quality" },
		{ "UltraQuality.DisplayName", "Ultra Quality" },
		{ "UltraQuality.Name", "UNISMode::UltraQuality" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NISBlueprint,
		nullptr,
		"UNISMode",
		"UNISMode",
		Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NISBlueprint_UNISMode()
	{
		if (!Z_Registration_Info_UEnum_UNISMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UNISMode.InnerSingleton, Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UNISMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UNISLibrary::execGetDefaultNISMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNISMode*)Z_Param__Result=UNISLibrary::GetDefaultNISMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execSetNISSharpness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Sharpness);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNISLibrary::SetNISSharpness(Z_Param_Sharpness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execSetNISCustomScreenPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CustomScreenPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNISLibrary::SetNISCustomScreenPercentage(Z_Param_CustomScreenPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execSetNISMode)
	{
		P_GET_ENUM(UNISMode,Z_Param_NISMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNISLibrary::SetNISMode(UNISMode(Z_Param_NISMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execGetNISScreenPercentageRange)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinScreenPercentage);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxScreenPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNISLibrary::GetNISScreenPercentageRange(Z_Param_Out_MinScreenPercentage,Z_Param_Out_MaxScreenPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execGetNISRecommendedScreenPercentage)
	{
		P_GET_ENUM(UNISMode,Z_Param_NISMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNISLibrary::GetNISRecommendedScreenPercentage(UNISMode(Z_Param_NISMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execGetSupportedNISModes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UNISMode>*)Z_Param__Result=UNISLibrary::GetSupportedNISModes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execIsNISModeSupported)
	{
		P_GET_ENUM(UNISMode,Z_Param_NISMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNISLibrary::IsNISModeSupported(UNISMode(Z_Param_NISMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execIsNISSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNISLibrary::IsNISSupported();
		P_NATIVE_END;
	}
	void UNISLibrary::StaticRegisterNativesUNISLibrary()
	{
		UClass* Class = UNISLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultNISMode", &UNISLibrary::execGetDefaultNISMode },
			{ "GetNISRecommendedScreenPercentage", &UNISLibrary::execGetNISRecommendedScreenPercentage },
			{ "GetNISScreenPercentageRange", &UNISLibrary::execGetNISScreenPercentageRange },
			{ "GetSupportedNISModes", &UNISLibrary::execGetSupportedNISModes },
			{ "IsNISModeSupported", &UNISLibrary::execIsNISModeSupported },
			{ "IsNISSupported", &UNISLibrary::execIsNISSupported },
			{ "SetNISCustomScreenPercentage", &UNISLibrary::execSetNISCustomScreenPercentage },
			{ "SetNISMode", &UNISLibrary::execSetNISMode },
			{ "SetNISSharpness", &UNISLibrary::execSetNISSharpness },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics
	{
		struct NISLibrary_eventGetDefaultNISMode_Parms
		{
			UNISMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NISLibrary_eventGetDefaultNISMode_Parms, ReturnValue), Z_Construct_UEnum_NISBlueprint_UNISMode, METADATA_PARAMS(nullptr, 0) }; // 2203964025
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "NIS" },
		{ "Comment", "///* Find a reasonable default NIS mode based on current hardware */\n" },
		{ "DisplayName", "Get Default NIS Mode" },
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
		{ "ToolTip", "Find a reasonable default NIS mode based on current hardware" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "GetDefaultNISMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::NISLibrary_eventGetDefaultNISMode_Parms), Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics
	{
		struct NISLibrary_eventGetNISRecommendedScreenPercentage_Parms
		{
			UNISMode NISMode;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NISMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NISMode;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::NewProp_NISMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::NewProp_NISMode = { "NISMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NISLibrary_eventGetNISRecommendedScreenPercentage_Parms, NISMode), Z_Construct_UEnum_NISBlueprint_UNISMode, METADATA_PARAMS(nullptr, 0) }; // 2203964025
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NISLibrary_eventGetNISRecommendedScreenPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::NewProp_NISMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::NewProp_NISMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "NIS" },
		{ "Comment", "/** Returns the recommended screen percentage for a given NIS mode. Returns CustomScreenPercentage if NISMode is UNISMode::Custom */" },
		{ "DisplayName", "Get NIS Recommended Screen Percentage" },
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
		{ "ToolTip", "Returns the recommended screen percentage for a given NIS mode. Returns CustomScreenPercentage if NISMode is UNISMode::Custom" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "GetNISRecommendedScreenPercentage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::NISLibrary_eventGetNISRecommendedScreenPercentage_Parms), Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics
	{
		struct NISLibrary_eventGetNISScreenPercentageRange_Parms
		{
			float MinScreenPercentage;
			float MaxScreenPercentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScreenPercentage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScreenPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::NewProp_MinScreenPercentage = { "MinScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NISLibrary_eventGetNISScreenPercentageRange_Parms, MinScreenPercentage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::NewProp_MaxScreenPercentage = { "MaxScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NISLibrary_eventGetNISScreenPercentageRange_Parms, MaxScreenPercentage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::NewProp_MinScreenPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::NewProp_MaxScreenPercentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "NIS" },
		{ "Comment", "/** The global screen percentage range that NIS supports. */" },
		{ "DisplayName", "Get NIS Screen Percentage Range" },
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
		{ "ToolTip", "The global screen percentage range that NIS supports." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "GetNISScreenPercentageRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::NISLibrary_eventGetNISScreenPercentageRange_Parms), Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics
	{
		struct NISLibrary_eventGetSupportedNISModes_Parms
		{
			TArray<UNISMode> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_NISBlueprint_UNISMode, METADATA_PARAMS(nullptr, 0) }; // 2203964025
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NISLibrary_eventGetSupportedNISModes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2203964025
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::Function_MetaDataParams[] = {
		{ "Category", "NIS" },
		{ "Comment", "/** Retrieves all supported NIS modes. Can be used to populate UI */" },
		{ "DisplayName", "Get Supported NIS Modes" },
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
		{ "ToolTip", "Retrieves all supported NIS modes. Can be used to populate UI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "GetSupportedNISModes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::NISLibrary_eventGetSupportedNISModes_Parms), Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics
	{
		struct NISLibrary_eventIsNISModeSupported_Parms
		{
			UNISMode NISMode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NISMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NISMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_NISMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_NISMode = { "NISMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NISLibrary_eventIsNISModeSupported_Parms, NISMode), Z_Construct_UEnum_NISBlueprint_UNISMode, METADATA_PARAMS(nullptr, 0) }; // 2203964025
	void Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NISLibrary_eventIsNISModeSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NISLibrary_eventIsNISModeSupported_Parms), &Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_NISMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_NISMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "NIS" },
		{ "Comment", "/** Checks whether a NIS mode is supported */" },
		{ "DisplayName", "Is NIS Mode Supported" },
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
		{ "ToolTip", "Checks whether a NIS mode is supported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "IsNISModeSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NISLibrary_eventIsNISModeSupported_Parms), Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_IsNISModeSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics
	{
		struct NISLibrary_eventIsNISSupported_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NISLibrary_eventIsNISSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NISLibrary_eventIsNISSupported_Parms), &Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "NIS" },
		{ "Comment", "/** Checks whether NIS is supported by the current GPU. Further details can be retrieved via QueryNISSupport*/" },
		{ "DisplayName", "Is NVIDIA NIS Supported" },
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
		{ "ToolTip", "Checks whether NIS is supported by the current GPU. Further details can be retrieved via QueryNISSupport" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "IsNISSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::NISLibrary_eventIsNISSupported_Parms), Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_IsNISSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics
	{
		struct NISLibrary_eventSetNISCustomScreenPercentage_Parms
		{
			float CustomScreenPercentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomScreenPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::NewProp_CustomScreenPercentage = { "CustomScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NISLibrary_eventSetNISCustomScreenPercentage_Parms, CustomScreenPercentage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::NewProp_CustomScreenPercentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "NIS" },
		{ "Comment", "/** Set the screen percentage used for Custom mode (100% by default) */" },
		{ "CPP_Default_CustomScreenPercentage", "100.000000" },
		{ "DisplayName", "Set NIS Custom Screen Percentage" },
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
		{ "ToolTip", "Set the screen percentage used for Custom mode (100% by default)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "SetNISCustomScreenPercentage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::NISLibrary_eventSetNISCustomScreenPercentage_Parms), Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics
	{
		struct NISLibrary_eventSetNISMode_Parms
		{
			UNISMode NISMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NISMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NISMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::NewProp_NISMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::NewProp_NISMode = { "NISMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NISLibrary_eventSetNISMode_Parms, NISMode), Z_Construct_UEnum_NISBlueprint_UNISMode, METADATA_PARAMS(nullptr, 0) }; // 2203964025
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::NewProp_NISMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::NewProp_NISMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "NIS" },
		{ "Comment", "/** Sets the console variables to enable/disable NIS (r.NIS.Enable, r.NIS.Upscaling, r.ScreenPercentage, r.TemporalAA.Upsampling, r.TemporalAA.Upscaler)*/" },
		{ "DisplayName", "Set NIS Mode" },
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
		{ "ToolTip", "Sets the console variables to enable/disable NIS (r.NIS.Enable, r.NIS.Upscaling, r.ScreenPercentage, r.TemporalAA.Upsampling, r.TemporalAA.Upscaler)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "SetNISMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::NISLibrary_eventSetNISMode_Parms), Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_SetNISMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics
	{
		struct NISLibrary_eventSetNISSharpness_Parms
		{
			float Sharpness;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sharpness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::NewProp_Sharpness = { "Sharpness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NISLibrary_eventSetNISSharpness_Parms, Sharpness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::NewProp_Sharpness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::Function_MetaDataParams[] = {
		{ "Category", "NIS" },
		{ "Comment", "/* Sets the console variables to enable additional NIS sharpening. Set to 0 to disable (r.NGX.NIS.Sharpness) */" },
		{ "DisplayName", "Set NIS Sharpness" },
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
		{ "ToolTip", "Sets the console variables to enable additional NIS sharpening. Set to 0 to disable (r.NGX.NIS.Sharpness)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "SetNISSharpness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::NISLibrary_eventSetNISSharpness_Parms), Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_SetNISSharpness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNISLibrary);
	UClass* Z_Construct_UClass_UNISLibrary_NoRegister()
	{
		return UNISLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNISLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNISLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NISBlueprint,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNISLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode, "GetDefaultNISMode" }, // 2830301564
		{ &Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage, "GetNISRecommendedScreenPercentage" }, // 1885203384
		{ &Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange, "GetNISScreenPercentageRange" }, // 3542084215
		{ &Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes, "GetSupportedNISModes" }, // 1353827105
		{ &Z_Construct_UFunction_UNISLibrary_IsNISModeSupported, "IsNISModeSupported" }, // 1700724726
		{ &Z_Construct_UFunction_UNISLibrary_IsNISSupported, "IsNISSupported" }, // 1225547359
		{ &Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage, "SetNISCustomScreenPercentage" }, // 2941027321
		{ &Z_Construct_UFunction_UNISLibrary_SetNISMode, "SetNISMode" }, // 3325750213
		{ &Z_Construct_UFunction_UNISLibrary_SetNISSharpness, "SetNISSharpness" }, // 2766582271
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNISLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NISLibrary.h" },
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNISLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNISLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNISLibrary_Statics::ClassParams = {
		&UNISLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNISLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNISLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNISLibrary()
	{
		if (!Z_Registration_Info_UClass_UNISLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNISLibrary.OuterSingleton, Z_Construct_UClass_UNISLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNISLibrary.OuterSingleton;
	}
	template<> NISBLUEPRINT_API UClass* StaticClass<UNISLibrary>()
	{
		return UNISLibrary::StaticClass();
	}
	UNISLibrary::UNISLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNISLibrary);
	UNISLibrary::~UNISLibrary() {}
	struct Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_NIS_Source_NISBlueprint_Public_NISLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_NIS_Source_NISBlueprint_Public_NISLibrary_h_Statics::EnumInfo[] = {
		{ UNISSupport_StaticEnum, TEXT("UNISSupport"), &Z_Registration_Info_UEnum_UNISSupport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3339399141U) },
		{ UNISMode_StaticEnum, TEXT("UNISMode"), &Z_Registration_Info_UEnum_UNISMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2203964025U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_NIS_Source_NISBlueprint_Public_NISLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNISLibrary, UNISLibrary::StaticClass, TEXT("UNISLibrary"), &Z_Registration_Info_UClass_UNISLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNISLibrary), 2750939988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_NIS_Source_NISBlueprint_Public_NISLibrary_h_206914499(TEXT("/Script/NISBlueprint"),
		Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_NIS_Source_NISBlueprint_Public_NISLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_NIS_Source_NISBlueprint_Public_NISLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_NIS_Source_NISBlueprint_Public_NISLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_NIS_Source_NISBlueprint_Public_NISLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
