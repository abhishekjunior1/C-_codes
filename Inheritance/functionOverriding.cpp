#include <iostream>
using namespace std;

class a {
public:
    void  show() {
        cout << "in base class a"<<endl;
         
    }
};

class b : public a {
public:
    void show() {
        cout << "Derived class ";
        a::show(); // You can call the base class function from the derived class like this

    }
};

int main() {
    b obj1;
    obj1.show();

    return 0;
}
