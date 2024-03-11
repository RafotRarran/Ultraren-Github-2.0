// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamlineBlueprint/Public/StreamlineLibraryReflex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamlineLibraryReflex() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STREAMLINEBLUEPRINT_API UClass* Z_Construct_UClass_UStreamlineLibraryReflex();
	STREAMLINEBLUEPRINT_API UClass* Z_Construct_UClass_UStreamlineLibraryReflex_NoRegister();
	STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport();
	STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode();
	UPackage* Z_Construct_UPackage__Script_StreamlineBlueprint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UStreamlineReflexMode;
	static UEnum* UStreamlineReflexMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UStreamlineReflexMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UStreamlineReflexMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode, (UObject*)Z_Construct_UPackage__Script_StreamlineBlueprint(), TEXT("UStreamlineReflexMode"));
		}
		return Z_Registration_Info_UEnum_UStreamlineReflexMode.OuterSingleton;
	}
	template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineReflexMode>()
	{
		return UStreamlineReflexMode_StaticEnum();
	}
	struct Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode_Statics::Enumerators[] = {
		{ "UStreamlineReflexMode::Disabled", (int64)UStreamlineReflexMode::Disabled },
		{ "UStreamlineReflexMode::Enabled", (int64)UStreamlineReflexMode::Enabled },
		{ "UStreamlineReflexMode::EnabledPlusBoost", (int64)UStreamlineReflexMode::EnabledPlusBoost },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "UStreamlineReflexMode::Disabled" },
		{ "Enabled.DisplayName", "Enabled" },
		{ "Enabled.Name", "UStreamlineReflexMode::Enabled" },
		{ "EnabledPlusBoost.DisplayName", "Enabled + Boost" },
		{ "EnabledPlusBoost.Name", "UStreamlineReflexMode::EnabledPlusBoost" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
		nullptr,
		"UStreamlineReflexMode",
		"UStreamlineReflexMode",
		Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode()
	{
		if (!Z_Registration_Info_UEnum_UStreamlineReflexMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UStreamlineReflexMode.InnerSingleton, Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UStreamlineReflexMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execGetRenderLatencyInMs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UStreamlineLibraryReflex::GetRenderLatencyInMs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execGetGameLatencyInMs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UStreamlineLibraryReflex::GetGameLatencyInMs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execGetGameToRenderLatencyInMs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UStreamlineLibraryReflex::GetGameToRenderLatencyInMs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execGetDefaultReflexMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStreamlineReflexMode*)Z_Param__Result=UStreamlineLibraryReflex::GetDefaultReflexMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execGetReflexMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStreamlineReflexMode*)Z_Param__Result=UStreamlineLibraryReflex::GetReflexMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execSetReflexMode)
	{
		P_GET_ENUM(UStreamlineReflexMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStreamlineLibraryReflex::SetReflexMode(UStreamlineReflexMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execQueryReflexSupport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStreamlineFeatureSupport*)Z_Param__Result=UStreamlineLibraryReflex::QueryReflexSupport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execIsReflexSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStreamlineLibraryReflex::IsReflexSupported();
		P_NATIVE_END;
	}
	void UStreamlineLibraryReflex::StaticRegisterNativesUStreamlineLibraryReflex()
	{
		UClass* Class = UStreamlineLibraryReflex::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultReflexMode", &UStreamlineLibraryReflex::execGetDefaultReflexMode },
			{ "GetGameLatencyInMs", &UStreamlineLibraryReflex::execGetGameLatencyInMs },
			{ "GetGameToRenderLatencyInMs", &UStreamlineLibraryReflex::execGetGameToRenderLatencyInMs },
			{ "GetReflexMode", &UStreamlineLibraryReflex::execGetReflexMode },
			{ "GetRenderLatencyInMs", &UStreamlineLibraryReflex::execGetRenderLatencyInMs },
			{ "IsReflexSupported", &UStreamlineLibraryReflex::execIsReflexSupported },
			{ "QueryReflexSupport", &UStreamlineLibraryReflex::execQueryReflexSupport },
			{ "SetReflexMode", &UStreamlineLibraryReflex::execSetReflexMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics
	{
		struct StreamlineLibraryReflex_eventGetDefaultReflexMode_Parms
		{
			UStreamlineReflexMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryReflex_eventGetDefaultReflexMode_Parms, ReturnValue), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode, METADATA_PARAMS(nullptr, 0) }; // 3054824280
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streamline|Reflex" },
		{ "DisplayName", "Get default Reflex mode" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "GetDefaultReflexMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::StreamlineLibraryReflex_eventGetDefaultReflexMode_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics
	{
		struct StreamlineLibraryReflex_eventGetGameLatencyInMs_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryReflex_eventGetGameLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streamline|Reflex" },
		{ "DisplayName", "Get Reflex Game Latency (ms)" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "GetGameLatencyInMs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::StreamlineLibraryReflex_eventGetGameLatencyInMs_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics
	{
		struct StreamlineLibraryReflex_eventGetGameToRenderLatencyInMs_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryReflex_eventGetGameToRenderLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streamline|Reflex" },
		{ "DisplayName", "Get Reflex Game To Render Latency (ms)" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "GetGameToRenderLatencyInMs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::StreamlineLibraryReflex_eventGetGameToRenderLatencyInMs_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics
	{
		struct StreamlineLibraryReflex_eventGetReflexMode_Parms
		{
			UStreamlineReflexMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryReflex_eventGetReflexMode_Parms, ReturnValue), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode, METADATA_PARAMS(nullptr, 0) }; // 3054824280
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streamline|Reflex" },
		{ "DisplayName", "Get Reflex mode" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "GetReflexMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::StreamlineLibraryReflex_eventGetReflexMode_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics
	{
		struct StreamlineLibraryReflex_eventGetRenderLatencyInMs_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryReflex_eventGetRenderLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streamline|Reflex" },
		{ "DisplayName", "Get Reflex Render Latency (ms)" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "GetRenderLatencyInMs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::StreamlineLibraryReflex_eventGetRenderLatencyInMs_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics
	{
		struct StreamlineLibraryReflex_eventIsReflexSupported_Parms
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
	void Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StreamlineLibraryReflex_eventIsReflexSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StreamlineLibraryReflex_eventIsReflexSupported_Parms), &Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streamline|Reflex" },
		{ "DisplayName", "Is NVIDIA Reflex Supported" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "IsReflexSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::StreamlineLibraryReflex_eventIsReflexSupported_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics
	{
		struct StreamlineLibraryReflex_eventQueryReflexSupport_Parms
		{
			UStreamlineFeatureSupport ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryReflex_eventQueryReflexSupport_Parms, ReturnValue), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineFeatureSupport, METADATA_PARAMS(nullptr, 0) }; // 2278808541
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streamline|Reflex" },
		{ "DisplayName", "Query NVIDIA Reflex Support" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "QueryReflexSupport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::StreamlineLibraryReflex_eventQueryReflexSupport_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics
	{
		struct StreamlineLibraryReflex_eventSetReflexMode_Parms
		{
			UStreamlineReflexMode Mode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryReflex_eventSetReflexMode_Parms, Mode), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode_MetaData)) }; // 3054824280
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Streamline|Reflex" },
		{ "DisplayName", "Set Reflex mode" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "SetReflexMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::StreamlineLibraryReflex_eventSetReflexMode_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamlineLibraryReflex);
	UClass* Z_Construct_UClass_UStreamlineLibraryReflex_NoRegister()
	{
		return UStreamlineLibraryReflex::StaticClass();
	}
	struct Z_Construct_UClass_UStreamlineLibraryReflex_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamlineLibraryReflex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStreamlineLibraryReflex_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode, "GetDefaultReflexMode" }, // 3799542554
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs, "GetGameLatencyInMs" }, // 1774321398
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs, "GetGameToRenderLatencyInMs" }, // 3941154718
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode, "GetReflexMode" }, // 2330337914
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs, "GetRenderLatencyInMs" }, // 104136997
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported, "IsReflexSupported" }, // 3522597132
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport, "QueryReflexSupport" }, // 4272737598
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode, "SetReflexMode" }, // 1566842062
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineLibraryReflex_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StreamlineLibraryReflex.h" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamlineLibraryReflex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamlineLibraryReflex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamlineLibraryReflex_Statics::ClassParams = {
		&UStreamlineLibraryReflex::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStreamlineLibraryReflex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineLibraryReflex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamlineLibraryReflex()
	{
		if (!Z_Registration_Info_UClass_UStreamlineLibraryReflex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamlineLibraryReflex.OuterSingleton, Z_Construct_UClass_UStreamlineLibraryReflex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStreamlineLibraryReflex.OuterSingleton;
	}
	template<> STREAMLINEBLUEPRINT_API UClass* StaticClass<UStreamlineLibraryReflex>()
	{
		return UStreamlineLibraryReflex::StaticClass();
	}
	UStreamlineLibraryReflex::UStreamlineLibraryReflex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamlineLibraryReflex);
	UStreamlineLibraryReflex::~UStreamlineLibraryReflex() {}
	struct Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_Statics::EnumInfo[] = {
		{ UStreamlineReflexMode_StaticEnum, TEXT("UStreamlineReflexMode"), &Z_Registration_Info_UEnum_UStreamlineReflexMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3054824280U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStreamlineLibraryReflex, UStreamlineLibraryReflex::StaticClass, TEXT("UStreamlineLibraryReflex"), &Z_Registration_Info_UClass_UStreamlineLibraryReflex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamlineLibraryReflex), 193306673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_1320152943(TEXT("/Script/StreamlineBlueprint"),
		Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Github_Ultraren_Github_2_0_Plugins_nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
