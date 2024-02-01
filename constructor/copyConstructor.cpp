#include<iostream>
using namespace std;
class num{
    int a;
    public:
    num()
    {
        a=10;
    }
    num(num & ob1)
    {
        cout<<"I am copy constructor: "<<endl;
        a=ob1.a;
        cout<<a;
    }
};
int main()
{
    num ob1;
    num ob2(ob1);
    
}