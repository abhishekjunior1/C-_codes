#include <iostream>
using namespace  std;
class MyClass {
public:
    void foo(int x) {
        std::cout << "foo: " << x << std::endl;
    }
    void bar(int x) {
    std::cout << "bar: " << x << std::endl;
    }
};

int main() {
    MyClass obj; 
    void (MyClass::*funcPtr)(int);
    funcPtr = &MyClass::foo;
    (obj.*funcPtr)(42);   
    funcPtr = &MyClass::bar;
    (obj.*funcPtr)(23); 
    return 0;
}