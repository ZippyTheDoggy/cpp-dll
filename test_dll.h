#include "./include/dll_runtime.h"

#define DLL_NAME "dll.dll"

int(*add)(int, int) = dllruntime::DLLGetFunction<int(*)(int, int)>(DLL_NAME, "add");
