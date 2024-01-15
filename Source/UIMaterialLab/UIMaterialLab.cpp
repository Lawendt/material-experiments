// Fill out your copyright notice in the Description page of Project Settings.

#include "UIMaterialLab.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FUIMaterialLabModule, UIMaterialLab, "UIMaterialLab" );

void FUIMaterialLabModule::StartupModule() {

	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);

}

void FUIMaterialLabModule::ShutdownModule()
{
	IModuleInterface::ShutdownModule();
}
