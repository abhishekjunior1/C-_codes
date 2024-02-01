#include<iostream>
using namespace std;
class add{//base class
    protected:
    int a=5;
    int b=20;

    public:
     int  total()
    {
        int c=a+b;
        return c;
    }

};
class sum:public add{//drived class
    protected:
    int a;

    public :
    sum(){
        cout<<"sum is : "<<total()<<endl;
      
    }
    void cal()
    {
        int a=10;

        cout<<"New sum is :"<<a + total();
    }

};
int main()
{
    sum obj;
    obj.cal();
    return 0;
}