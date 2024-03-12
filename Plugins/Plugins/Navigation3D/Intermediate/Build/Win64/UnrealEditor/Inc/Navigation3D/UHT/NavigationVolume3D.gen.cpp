// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Navigation3D/Public/NavigationVolume3D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationVolume3D() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	NAVIGATION3D_API UClass* Z_Construct_UClass_ANavigationVolume3D();
	NAVIGATION3D_API UClass* Z_Construct_UClass_ANavigationVolume3D_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Navigation3D();
// End Cross Module References
	DEFINE_FUNCTION(ANavigationVolume3D::execGetDivisionSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDivisionSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANavigationVolume3D::execGetDivisionsZ)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDivisionsZ();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANavigationVolume3D::execGetDivisionsY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDivisionsY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANavigationVolume3D::execGetDivisionsX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDivisionsX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANavigationVolume3D::execGetTotalDivisions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalDivisions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANavigationVolume3D::execConvertCoordinatesToLocation)
	{
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_coordinates);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConvertCoordinatesToLocation(Z_Param_Out_coordinates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANavigationVolume3D::execConvertLocationToCoordinates)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->ConvertLocationToCoordinates(Z_Param_Out_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANavigationVolume3D::execFindPath)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_destination);
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_object_types);
		P_GET_OBJECT(UClass,Z_Param_actor_class_filter);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_out_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindPath(Z_Param_Out_start,Z_Param_Out_destination,Z_Param_Out_object_types,Z_Param_actor_class_filter,Z_Param_Out_out_path);
		P_NATIVE_END;
	}
	void ANavigationVolume3D::StaticRegisterNativesANavigationVolume3D()
	{
		UClass* Class = ANavigationVolume3D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertCoordinatesToLocation", &ANavigationVolume3D::execConvertCoordinatesToLocation },
			{ "ConvertLocationToCoordinates", &ANavigationVolume3D::execConvertLocationToCoordinates },
			{ "FindPath", &ANavigationVolume3D::execFindPath },
			{ "GetDivisionSize", &ANavigationVolume3D::execGetDivisionSize },
			{ "GetDivisionsX", &ANavigationVolume3D::execGetDivisionsX },
			{ "GetDivisionsY", &ANavigationVolume3D::execGetDivisionsY },
			{ "GetDivisionsZ", &ANavigationVolume3D::execGetDivisionsZ },
			{ "GetTotalDivisions", &ANavigationVolume3D::execGetTotalDivisions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics
	{
		struct NavigationVolume3D_eventConvertCoordinatesToLocation_Parms
		{
			FIntVector coordinates;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_coordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_coordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::NewProp_coordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::NewProp_coordinates = { "coordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventConvertCoordinatesToLocation_Parms, coordinates), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::NewProp_coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::NewProp_coordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "World Location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventConvertCoordinatesToLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::NewProp_coordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "NavigationVolume3D" },
		{ "Comment", "/**\n\x09* Converts a coordinate into a world space location. If the coordinate is not within the bounds of the grid,\n\x09* the coordinate will be clamped to the closest coordinate.\n\x09* @param\x09""coordinates\x09\x09\x09The coordinates to convert into world space\n\x09* @return\x09The converted location in world space\n\x09*/" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "Converts a coordinate into a world space location. If the coordinate is not within the bounds of the grid,\nthe coordinate will be clamped to the closest coordinate.\n@param        coordinates                     The coordinates to convert into world space\n@return       The converted location in world space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavigationVolume3D, nullptr, "ConvertCoordinatesToLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::NavigationVolume3D_eventConvertCoordinatesToLocation_Parms), Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics
	{
		struct NavigationVolume3D_eventConvertLocationToCoordinates_Parms
		{
			FVector location;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventConvertLocationToCoordinates_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::NewProp_location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Coordinates" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventConvertLocationToCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::Function_MetaDataParams[] = {
		{ "Category", "NavigationVolume3D" },
		{ "Comment", "/**\n\x09* Converts a world space location to a coordinate in the grid. If the location is not located within the grid,\n\x09* the coordinate will be clamped to the closest coordinate.\n\x09* @param\x09location\x09\x09\x09The location to convert\n\x09* @return\x09The converted coordinates\n\x09*/" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "Converts a world space location to a coordinate in the grid. If the location is not located within the grid,\nthe coordinate will be clamped to the closest coordinate.\n@param        location                        The location to convert\n@return       The converted coordinates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavigationVolume3D, nullptr, "ConvertLocationToCoordinates", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::NavigationVolume3D_eventConvertLocationToCoordinates_Parms), Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics
	{
		struct NavigationVolume3D_eventFindPath_Parms
		{
			FVector start;
			FVector destination;
			TArray<TEnumAsByte<EObjectTypeQuery> > object_types;
			UClass* actor_class_filter;
			TArray<FVector> out_path;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_destination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_destination;
		static const UECodeGen_Private::FBytePropertyParams NewProp_object_types_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_object_types_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_object_types;
		static const UECodeGen_Private::FClassPropertyParams NewProp_actor_class_filter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_out_path_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_out_path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventFindPath_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventFindPath_Parms, destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_destination_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_object_types_Inner = { "object_types", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_object_types_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_object_types = { "object_types", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventFindPath_Parms, object_types), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_object_types_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_object_types_MetaData)) }; // 3629342158
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_actor_class_filter = { "actor_class_filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventFindPath_Parms, actor_class_filter), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_out_path_Inner = { "out_path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_out_path = { "out_path", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventFindPath_Parms, out_path), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationVolume3D_eventFindPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavigationVolume3D_eventFindPath_Parms), &Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_object_types_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_object_types,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_actor_class_filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_out_path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_out_path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "NavigationVolume3D" },
		{ "Comment", "// Finds a path from the starting location to the destination\n" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "Finds a path from the starting location to the destination" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavigationVolume3D, nullptr, "FindPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::NavigationVolume3D_eventFindPath_Parms), Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavigationVolume3D_FindPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigationVolume3D_FindPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize_Statics
	{
		struct NavigationVolume3D_eventGetDivisionSize_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventGetDivisionSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "NavigationVolume3D" },
		{ "Comment", "// Gets the size of each division in the grid\n" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "Gets the size of each division in the grid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavigationVolume3D, nullptr, "GetDivisionSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize_Statics::NavigationVolume3D_eventGetDivisionSize_Parms), Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX_Statics
	{
		struct NavigationVolume3D_eventGetDivisionsX_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventGetDivisionsX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX_Statics::Function_MetaDataParams[] = {
		{ "Category", "NavigationVolume3D" },
		{ "Comment", "// Gets the number of x divisions in the grid\n" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "Gets the number of x divisions in the grid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavigationVolume3D, nullptr, "GetDivisionsX", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX_Statics::NavigationVolume3D_eventGetDivisionsX_Parms), Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY_Statics
	{
		struct NavigationVolume3D_eventGetDivisionsY_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventGetDivisionsY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY_Statics::Function_MetaDataParams[] = {
		{ "Category", "NavigationVolume3D" },
		{ "Comment", "// Gets the number of y divisions in the grid\n" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "Gets the number of y divisions in the grid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavigationVolume3D, nullptr, "GetDivisionsY", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY_Statics::NavigationVolume3D_eventGetDivisionsY_Parms), Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ_Statics
	{
		struct NavigationVolume3D_eventGetDivisionsZ_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventGetDivisionsZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "NavigationVolume3D" },
		{ "Comment", "// Gets the number of z divisions in the grid\n" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "Gets the number of z divisions in the grid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavigationVolume3D, nullptr, "GetDivisionsZ", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ_Statics::NavigationVolume3D_eventGetDivisionsZ_Parms), Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions_Statics
	{
		struct NavigationVolume3D_eventGetTotalDivisions_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationVolume3D_eventGetTotalDivisions_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "NavigationVolume3D" },
		{ "Comment", "// Gets the total number of divisions in the grid\n" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "Gets the total number of divisions in the grid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavigationVolume3D, nullptr, "GetTotalDivisions", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions_Statics::NavigationVolume3D_eventGetTotalDivisions_Parms), Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigationVolume3D);
	UClass* Z_Construct_UClass_ANavigationVolume3D_NoRegister()
	{
		return ANavigationVolume3D::StaticClass();
	}
	struct Z_Construct_UClass_ANavigationVolume3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DivisionsX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DivisionsX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DivisionsY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DivisionsY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DivisionsZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DivisionsZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DivisionSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DivisionSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSharedNeighborAxes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinSharedNeighborAxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavigationVolume3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Navigation3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANavigationVolume3D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANavigationVolume3D_ConvertCoordinatesToLocation, "ConvertCoordinatesToLocation" }, // 197350802
		{ &Z_Construct_UFunction_ANavigationVolume3D_ConvertLocationToCoordinates, "ConvertLocationToCoordinates" }, // 1143787742
		{ &Z_Construct_UFunction_ANavigationVolume3D_FindPath, "FindPath" }, // 2780729226
		{ &Z_Construct_UFunction_ANavigationVolume3D_GetDivisionSize, "GetDivisionSize" }, // 1004831567
		{ &Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsX, "GetDivisionsX" }, // 952751116
		{ &Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsY, "GetDivisionsY" }, // 3991647621
		{ &Z_Construct_UFunction_ANavigationVolume3D_GetDivisionsZ, "GetDivisionsZ" }, // 1975235693
		{ &Z_Construct_UFunction_ANavigationVolume3D_GetTotalDivisions, "GetTotalDivisions" }, // 2621242146
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationVolume3D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavigationVolume3D.h" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DefaultSceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NavigationVolume3D" },
		{ "Comment", "// The default (root) scene component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "The default (root) scene component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DefaultSceneComponent = { "DefaultSceneComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationVolume3D, DefaultSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DefaultSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DefaultSceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_ProceduralMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NavigationVolume3D" },
		{ "Comment", "// The procedural mesh responsbile for rendering the grid\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "The procedural mesh responsbile for rendering the grid" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_ProceduralMesh = { "ProceduralMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationVolume3D, ProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_ProceduralMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_ProceduralMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NavigationVolume3D|Pathfinding" },
		{ "ClampMin", "1" },
		{ "Comment", "// The number of divisions in the grid along the X axis\n" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "The number of divisions in the grid along the X axis" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsX = { "DivisionsX", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationVolume3D, DivisionsX), METADATA_PARAMS(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsY_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NavigationVolume3D|Pathfinding" },
		{ "ClampMin", "1" },
		{ "Comment", "// The number of divisions in the grid along the Y axis\n" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "The number of divisions in the grid along the Y axis" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsY = { "DivisionsY", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationVolume3D, DivisionsY), METADATA_PARAMS(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsZ_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NavigationVolume3D|Pathfinding" },
		{ "ClampMin", "1" },
		{ "Comment", "// The number of divisions in the grid along the Z axis\n" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "The number of divisions in the grid along the Z axis" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsZ = { "DivisionsZ", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationVolume3D, DivisionsZ), METADATA_PARAMS(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NavigationVolume3D|Pathfinding" },
		{ "ClampMin", "1" },
		{ "Comment", "// The size of each division\n" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "The size of each division" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionSize = { "DivisionSize", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationVolume3D, DivisionSize), METADATA_PARAMS(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_MinSharedNeighborAxes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NavigationVolume3D|Pathfinding" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "Comment", "// The minimum number of axes that must be shared with a neighboring node for it to be counted a neighbor\n" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "The minimum number of axes that must be shared with a neighboring node for it to be counted a neighbor" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_MinSharedNeighborAxes = { "MinSharedNeighborAxes", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationVolume3D, MinSharedNeighborAxes), METADATA_PARAMS(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_MinSharedNeighborAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_MinSharedNeighborAxes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_LineThickness_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NavigationVolume3D|Aesthetics" },
		{ "ClampMin", "0" },
		{ "Comment", "// The thickness of the grid lines\n" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "The thickness of the grid lines" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationVolume3D, LineThickness), METADATA_PARAMS(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_LineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NavigationVolume3D|Aesthetics" },
		{ "Comment", "// The color of the grid\n" },
		{ "ModuleRelativePath", "Public/NavigationVolume3D.h" },
		{ "ToolTip", "The color of the grid" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationVolume3D, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigationVolume3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DefaultSceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_ProceduralMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionsZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_DivisionSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_MinSharedNeighborAxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_LineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationVolume3D_Statics::NewProp_Color,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavigationVolume3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationVolume3D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigationVolume3D_Statics::ClassParams = {
		&ANavigationVolume3D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANavigationVolume3D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationVolume3D_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavigationVolume3D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationVolume3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavigationVolume3D()
	{
		if (!Z_Registration_Info_UClass_ANavigationVolume3D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigationVolume3D.OuterSingleton, Z_Construct_UClass_ANavigationVolume3D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANavigationVolume3D.OuterSingleton;
	}
	template<> NAVIGATION3D_API UClass* StaticClass<ANavigationVolume3D>()
	{
		return ANavigationVolume3D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationVolume3D);
	ANavigationVolume3D::~ANavigationVolume3D() {}
	struct Z_CompiledInDeferFile_FID_Work_FuckOneDrive_Ultraren_Github_2_0_Plugins_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_FuckOneDrive_Ultraren_Github_2_0_Plugins_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANavigationVolume3D, ANavigationVolume3D::StaticClass, TEXT("ANavigationVolume3D"), &Z_Registration_Info_UClass_ANavigationVolume3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigationVolume3D), 3331158533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_FuckOneDrive_Ultraren_Github_2_0_Plugins_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_1671650571(TEXT("/Script/Navigation3D"),
		Z_CompiledInDeferFile_FID_Work_FuckOneDrive_Ultraren_Github_2_0_Plugins_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_FuckOneDrive_Ultraren_Github_2_0_Plugins_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
