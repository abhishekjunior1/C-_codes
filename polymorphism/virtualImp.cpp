#include<iostream>
using namespace std;
class base {
    public:
    virtual void show()
    {
        cout<<"I am base class "<<endl;
    }
};
class derived:public base{
    public:
    void show()
    {
        cout<<"I ma derived class " <<endl;
    }
};
int main()
{
    base * ptr;///------>base class pointer
    derived  obj;//------->deived class obj
    ptr=&obj;
    ptr->show();//----------->pointing to derived class 

   


}