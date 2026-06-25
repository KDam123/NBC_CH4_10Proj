#include "Temporary.h"

// 필수 과제 요구사항: StartupModule, ShutdownModule 구현
void FTemporaryModule::StartupModule()
{
    // 플러그인이 켜질 때 가동되는 구역
}

void FTemporaryModule::ShutdownModule()
{
    // 플러그인이 꺼질 때 가동되는 구역
}

IMPLEMENT_MODULE(FTemporaryModule, Temporary)
