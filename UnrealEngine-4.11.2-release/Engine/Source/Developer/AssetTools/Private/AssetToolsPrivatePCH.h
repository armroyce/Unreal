// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#ifndef __AssetToolsPrivatePCH_h__
#define __AssetToolsPrivatePCH_h__

#include "UnrealEd.h"
#include "ISourceControlModule.h"

DECLARE_LOG_CATEGORY_EXTERN(LogAssetTools, Log, All);

#include "IAssetTypeActions.h"
#include "IClassTypeActions.h"
#include "IAssetTools.h"

#include "AssetTypeActions_Base.h"
#include "AssetTypeActions_CSVAssetBase.h"

#include "ClassTypeActions_Base.h"
#include "AssetTypeActions/AssetTypeActions_ClassTypeBase.h"

#include "AssetTypeActions/AssetTypeActions_Blueprint.h"
#include "AssetTypeActions/AssetTypeActions_Curve.h"
#include "AssetTypeActions/AssetTypeActions_MaterialInterface.h"
#include "AssetTypeActions/AssetTypeActions_SkeletalMesh.h"
#include "AssetTypeActions/AssetTypeActions_FbxSceneImportData.h"
#include "AssetTypeActions/AssetTypeActions_SoundBase.h"
#include "AssetTypeActions/AssetTypeActions_Texture.h"
#include "AssetTypeActions/AssetTypeActions_TextureRenderTarget.h"
#include "AssetTypeActions/AssetTypeActions_VectorField.h"

#include "AssetTypeActions/AssetTypeActions_AnimationAsset.h"
#include "AssetTypeActions/AssetTypeActions_AnimBlueprint.h"
#include "AssetTypeActions/AssetTypeActions_AnimComposite.h"
#include "AssetTypeActions/AssetTypeActions_AnimMontage.h"
#include "AssetTypeActions/AssetTypeActions_AnimSequence.h"
#include "AssetTypeActions/AssetTypeActions_BlendSpace.h"
#include "AssetTypeActions/AssetTypeActions_AimOffset.h"
#include "AssetTypeActions/AssetTypeActions_BlendSpace1D.h"
#include "AssetTypeActions/AssetTypeActions_AimOffset1D.h"
#include "AssetTypeActions/AssetTypeActions_CameraAnim.h"
#include "AssetTypeActions/AssetTypeActions_CurveFloat.h"
#include "AssetTypeActions/AssetTypeActions_CurveTable.h"
#include "AssetTypeActions/AssetTypeActions_CurveVector.h"
#include "AssetTypeActions/AssetTypeActions_CurveLinearColor.h"
#include "AssetTypeActions/AssetTypeActions_DataAsset.h"
#include "AssetTypeActions/AssetTypeActions_DataTable.h"
#include "AssetTypeActions/AssetTypeActions_DestructibleMesh.h"
#include "AssetTypeActions/AssetTypeActions_DialogueVoice.h"
#include "AssetTypeActions/AssetTypeActions_DialogueWave.h"
#include "AssetTypeActions/AssetTypeActions_Enum.h"
#include "AssetTypeActions/AssetTypeActions_Class.h"
#include "AssetTypeActions/AssetTypeActions_Struct.h"
#include "AssetTypeActions/AssetTypeActions_Font.h"
#include "AssetTypeActions/AssetTypeActions_ForceFeedbackEffect.h"
#include "AssetTypeActions/AssetTypeActions_SubsurfaceProfile.h"
#include "AssetTypeActions/AssetTypeActions_InstancedFoliageSettings.h"
#include "AssetTypeActions/AssetTypeActions_InterpData.h"
#include "AssetTypeActions/AssetTypeActions_LandscapeLayer.h"
#include "AssetTypeActions/AssetTypeActions_LandscapeGrassType.h"
#include "AssetTypeActions/AssetTypeActions_Material.h"
#include "AssetTypeActions/AssetTypeActions_MaterialFunction.h"
#include "AssetTypeActions/AssetTypeActions_MaterialInstanceConstant.h"
#include "AssetTypeActions/AssetTypeActions_MaterialParameterCollection.h"
#include "AssetTypeActions/AssetTypeActions_MorphTarget.h"
#include "AssetTypeActions/AssetTypeActions_NiagaraScript.h"
#include "AssetTypeActions/AssetTypeActions_NiagaraEffect.h"
#include "AssetTypeActions/AssetTypeActions_ObjectLibrary.h"
#include "AssetTypeActions/AssetTypeActions_ParticleSystem.h"
#include "AssetTypeActions/AssetTypeActions_PhysicalMaterial.h"
#include "AssetTypeActions/AssetTypeActions_PhysicsAsset.h"
#include "AssetTypeActions/AssetTypeActions_ProceduralFoliageSpawner.h"
#include "AssetTypeActions/AssetTypeActions_Redirector.h"
#include "AssetTypeActions/AssetTypeActions_ReverbEffect.h"
#include "AssetTypeActions/AssetTypeActions_Rig.h"
#include "AssetTypeActions/AssetTypeActions_Skeleton.h"
#include "AssetTypeActions/AssetTypeActions_SlateBrush.h"
#include "AssetTypeActions/AssetTypeActions_SlateWidgetStyle.h"
#include "AssetTypeActions/AssetTypeActions_SoundAttenuation.h"
#include "AssetTypeActions/AssetTypeActions_SoundConcurrency.h"
#include "AssetTypeActions/AssetTypeActions_SoundClass.h"
#include "AssetTypeActions/AssetTypeActions_SoundCue.h"
#include "AssetTypeActions/AssetTypeActions_SoundMix.h"
#include "AssetTypeActions/AssetTypeActions_SoundWave.h"
#include "AssetTypeActions/AssetTypeActions_StaticMesh.h"
#include "AssetTypeActions/AssetTypeActions_Texture2D.h"
#include "AssetTypeActions/AssetTypeActions_TextureCube.h"
#include "AssetTypeActions/AssetTypeActions_TextureRenderTarget2D.h"
#include "AssetTypeActions/AssetTypeActions_TextureRenderTargetCube.h"
#include "AssetTypeActions/AssetTypeActions_TextureLightProfile.h"
#include "AssetTypeActions/AssetTypeActions_TouchInterface.h"
#include "AssetTypeActions/AssetTypeActions_VectorFieldAnimated.h"
#include "AssetTypeActions/AssetTypeActions_VectorFieldStatic.h"
#include "AssetTypeActions/AssetTypeActions_VertexAnimation.h"
#include "AssetTypeActions/AssetTypeActions_World.h"

#include "SDiscoveringAssetsDialog.h"
#include "AssetRenameManager.h"
#include "AssetFixUpRedirectors.h"
#include "AssetTools.h"

#endif
