# NBC\_CH4\_10Proj

10번 과제

도전과제는 ModuleAndPluginCharacter.cpp의 BeginPlay에서 구현



\*\*플러그인 제작 과정\*\*

1. 모듈 폴더 구조 생성 
* Source/Test 경로 생성
* (Test.Build.cs, Test.h, Test.cpp)을 생성



2\. 모듈 연결 및 빌드 대상 등록



3\. 모듈 간 상호작용 구현

* TestActor 생성



4\. 독립 플러그인(Temporary) 구축

* Plugins/Temporary 경로 생성
* 경로에 Content, Source, Temporary.uplugin 파일을 구성
* 플러그인 모듈 설정: 플러그인 내부의 Source/Temporary 폴더에 Build.cs와 모듈 인터페이스(StartupModule, ShutdownModule)를 구현





\*\*과제중 에러사항\*\*

새 모듈 생성할 때 비쥬얼 스튜디오 탐색기에서 add item으로 추가하여 Test.Build.cs, 

Test.h, Test.cpp을 생성했는데 에디터에서 인식이 안되는 문제가 발생



해결 방법

몇 시간동안 계속 생성하고 Generate Visual Studio project files을 반복해보았으나 실패하여 직접 윈도우 탐색기로 폴더 안에 txt로 파일을 만든 후 .cs, .h, .cpp로 수정



결과

에디터 안에서 정상적으로 인식이 되는것을 확인

