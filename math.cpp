#define DLL __declspec(dllexport)

extern "C" {
    int add(int a, int b) { return a + b; }
    int sub(int a, int b) { return a - b; }
    int mul(int a, int b) { return a * b; }
    int divide(int a, int b) { return a / b; }
}
