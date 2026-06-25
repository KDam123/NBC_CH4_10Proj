#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

// 필수 과제 요구사항: IModuleInterface를 상속받는 모듈 클래스 정의
class FTemporaryModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
