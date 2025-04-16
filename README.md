- Dynamic DLL loading at runtime and function calling.
- Easily creatable specification header file.
- Simple math code and dll provided as an example.
- Uses windows.h
  
### Example compilation commands:
###### WSL2 Cross-Compilation (how I've tested it):
1. `x86_64-w64-mingw32-g++ -shared -o math.dll math.cpp`
2. `x86_64-w64-mingw32-g++ main.cpp -o main.exe --static`

###### Normal compilation with a windows-based g++
1. `g++ -shared -o math.dll math.cpp`
2. `g++ main.cpp -o main.exe --static` (static may or may not be needed here)
