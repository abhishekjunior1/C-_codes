#include<iostream>
using namespace std;
class a{
    int n;
    public:
        int  getdata()
    {
        cout<<"Enter the value of n: ";
        cin>>n;
        return n;
    }
    void display()
    {
        cout<<"hi Abhishek"<<endl;
    }
    

};
class b:public a{
    int c;
    public:
    int  send()
    {
        int data=getdata();
         c= 10 + data;
         return c;
    }
    void display()
    {
        cout<<"you good"<<endl;
    }

};
class c:public b{
    public:
    void printdata()
    {
        int k=send();
        cout<<k <<endl;
        cout<<"I am multilevel Inheritance: "<<endl;
    }
    void call()
    {
        cout<<"Example of same function Name: "<<endl;
        a::display();
        b::display();
    }

};
int main()
{
 
     c obj;
     obj.printdata();
     obj.call();
     return 0;

}