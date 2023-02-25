// Fill out your copyright notice in the Description page of Project Settings.


#include "MP2AssetManager.h"
#include "AbilitySystemGloabls.h"


void UMP2AssetManager::StartInitialLoading(){
    
    Super::StartInitialLoading();
    UAbilitySystemGlobals::Get().InitGlobalData();
}
