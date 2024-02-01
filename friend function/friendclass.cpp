
#include <iostream>
using namespace std;

class a {
public:
    string name;
    int a;
    void getdata();
};

class b {
public:
    friend class a;
    int z = 10;
    void printdata(a obj); // Pass an object of class a as a parameter
};

void a::getdata() {
    name = "abhishek";
    a = 10;
}

void b::printdata(a obj) { // Accept an object of class a as a parameter
    cout << z << endl;
    cout << obj.name << endl; // Access name through the parameter obj
}

int main() {
    a obj;
    obj.getdata();
    b obj1;
    obj1.printdata(obj); // Pass obj as an argument
    return 0;
}
