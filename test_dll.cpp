#define DLL __declspec(dllexport)

extern "C" {
    int add(int a, int b) {
        return a + b;
    }
}
