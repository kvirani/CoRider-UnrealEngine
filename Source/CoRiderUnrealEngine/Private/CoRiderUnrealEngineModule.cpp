#include "CoRiderUnrealEngineModule.h"
#include "BlueprintAuditor.h"

#define LOCTEXT_NAMESPACE "FCoRiderUnrealEngineModule"

void FCoRiderUnrealEngineModule::StartupModule()
{
	UE_LOG(LogCoRider, Log, TEXT("CoRider: CoRiderUnrealEngine module loaded."));
}

void FCoRiderUnrealEngineModule::ShutdownModule()
{
	UE_LOG(LogCoRider, Log, TEXT("CoRider: CoRiderUnrealEngine module unloaded."));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FCoRiderUnrealEngineModule, CoRiderUnrealEngine)
