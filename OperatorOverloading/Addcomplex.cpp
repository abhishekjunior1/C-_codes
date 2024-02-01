#include<iostream>
using namespace std;

class complex {
public:
    int x, y;

    complex() {}
    complex(int a, int b) {
        this->x = a;
        this->y = b;
    }

    complex operator +(complex obj2) {
        complex temp;
        temp.x = x + obj2.x;
        temp.y = y + obj2.y;
        return temp;
    }

    void display() {
        cout << "real part is " << x << endl;
        cout << "imaginary part is " << y << endl;
    }
};

int main() {
    complex obj1(10, 20);
    complex obj2(5, 15); 
    complex obj3;
    obj3 = obj1 + obj2;
    obj3.display();

    return 0;
}
