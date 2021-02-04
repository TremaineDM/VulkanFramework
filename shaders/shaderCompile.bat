@ECHO OFF
set dirpath=%~dp0
@echo %mypath%

for %%i in (%dirpath%*vert) do (
	echo %%i
	C:\VulkanSDK\1.2.154.1\Bin\glslc.exe %dirpath%\%%~ni%%~xi -o %dirpath%\%%~ni.spv
)

for %%i in (%dirpath%*frag) do (
	echo %%i
	C:\VulkanSDK\1.2.154.1\Bin\glslc.exe %dirpath%\%%~ni%%~xi -o %dirpath%\%%~ni.spv
)