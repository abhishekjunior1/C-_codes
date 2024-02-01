#include<iostream>
#include<exception>//exception class hai bhai;
using namespace std;
int main()
{
    cout<<"Enter a and b values: ";
    int a,b;
    cin>>a>>b;
    try{
        if(b==0)
        throw runtime_error("error hai bhai");//---->runtime_error is a derived class---> of <exception>
    }
    catch(runtime_error obj)
    {
        cout<<obj.what();//--->what is method
    }
}