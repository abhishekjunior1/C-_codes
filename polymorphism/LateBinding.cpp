#include<iostream>
using namespace std;
class base{
    public:
     virtual void  display()
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
    ptr->display(); 
    
    derived obj1;
    ptr = & obj1;//  pointer of base class
    ptr->display();        
    


}