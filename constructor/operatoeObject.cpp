#include<iostream>
using namespace std;

class student {
    int roll, fees;
public:
    student(int a, int m) {
        roll = a;
        fees = m;
    }
    operator int() {
        return roll;
    }
    operator float() {
        return (fees);
    }
};

int main() {
    int i;
    float j;
    student obj(4, 5000);
    i = obj;
    j = obj;
    cout << "value of i: " << i << endl;
    cout << "value of j: " << j << endl;
    return 0;
}
