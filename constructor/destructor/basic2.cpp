#include<iostream>
using namespace std;
class abc{
    int a,b,c;
    public:
    abc()
    {
        cout<<"I am constructor 1: "<<endl;
        a=b=c=10;
    }

    ~abc()
    {
        // cout<<a;
        cout<<"I am destructor "<<endl;
    } 
    void display()
    {
        cout<<"I am back"<<endl;
    }



};
int main()
{
        abc obj;
        obj.display();
}