#include "./include/dll_runtime.h"

#define DLL_NAME "dll.dll"

int(*add)(int, int) = dllruntime::DLLGetFunction<int(*)(int, int)>(DLL_NAME, "add");
int(*sub)(int, int) = dllruntime::DLLGetFunction<int(*)(int, int)>(DLL_NAME, "sub");
int(*mul)(int, int) = dllruntime::DLLGetFunction<int(*)(int, int)>(DLL_NAME, "mul");
int(*div)(int, int) = dllruntime::DLLGetFunction<int(*)(int, int)>(DLL_NAME, "div");
