// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocket_init() {}
	WEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketConnectError__DelegateSignature();
	WEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketClosed__DelegateSignature();
	WEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketConnected__DelegateSignature();
	WEBSOCKET_API UFunction* Z_Construct_UDelegateFunction_WebSocket_WebSocketRecieve__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_WebSocket()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WebSocket_WebSocketConnectError__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WebSocket_WebSocketClosed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WebSocket_WebSocketConnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WebSocket_WebSocketRecieve__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/WebSocket",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3C59C5D7,
				0xF0FBCD2F,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
