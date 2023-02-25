// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "MP2AssetManager.generated.h"

/**
 * 
 */
UCLASS()
class MP2_API UMP2AssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
    virtual void StartInitialLoading() override;
	
};
