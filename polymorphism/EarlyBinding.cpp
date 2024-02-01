#include<iostream>
using namespace std;
class base{
    public:
      void display()
    {
    cout<<"base class display "<<endl;
    }
};
class derived:public base{
    public:
    void display()
    {
      cout<<"Derived class display "<<endl;
    }
};
int main()
{
    base *ptr;
    base obj;
    ptr = &obj;
    ptr->display();     //    pointer    so    -  >


    derived *ptr1;
    derived obj1;
    ptr1=&obj1;
    ptr1->display();
    


}