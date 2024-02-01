//Hybrid inheritance
#include <iostream>
using namespace std;

class A {
protected:
   int a;

public:
   void get_a(int x) {
      a = x;
   }
};

class B : public A {
protected:
   int b;

public:
   void get_b(int y) {
      b = y;
   }
};

class C {
protected:
    int c;

public:
   void get_c(int z) {
      c = z;
   }
};

class D : public B, public C {
protected:
    int d;

public:

      void get_d(int w) {
         d = w;
      }

      void sum() {
         cout << "Sum= " << a + b + c + d;
      }

};

int main() {
   D obj;
   obj.get_a(10);
   obj.get_b(20);
   obj.get_c(30);
   obj.get_d(40);
   obj.sum();
   return 0;
}