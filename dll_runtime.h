#include <iostream>
#include <string>
#include <windows.h>
#include <vector>

namespace dllruntime {
    bool __dll_loaded_atexit = false;
    std::vector<HMODULE> __dll_loaded_modules = {};
    void __dll_cleanup_function() {
        for(auto& module : __dll_loaded_modules)
            if (module != NULL) FreeLibrary(module);
    }

    template <typename T>
    T DLLGetFunction(const char* dll, const char* function) {
        if(!__dll_loaded_atexit) {
            std::atexit(__dll_cleanup_function);
            __dll_loaded_atexit = true;
        }
        HMODULE hModule = LoadLibraryA(dll);
        if (hModule == NULL) {
            std::cerr << "Failed to load DLL (" << GetLastError() << ") :: " << dll << std::endl;
            exit(EXIT_FAILURE);
        }
        FARPROC proc = GetProcAddress(hModule, function);
        if (!proc) {
            std::cerr << "Failed to get function address: " << GetLastError() << std::endl;
            FreeLibrary(hModule);
            exit(EXIT_FAILURE);
        }
        T func = reinterpret_cast<T>(proc);
        __dll_loaded_modules.push_back(hModule);
        return func;
    }
}
