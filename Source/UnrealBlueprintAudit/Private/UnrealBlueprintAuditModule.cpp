#include "UnrealBlueprintAuditModule.h"

#define LOCTEXT_NAMESPACE "FUnrealBlueprintAuditModule"

void FUnrealBlueprintAuditModule::StartupModule()
{
	// Module startup — subsystem auto-registers via UCLASS
}

void FUnrealBlueprintAuditModule::ShutdownModule()
{
	// Module shutdown
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FUnrealBlueprintAuditModule, UnrealBlueprintAudit)
