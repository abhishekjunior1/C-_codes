#include<iostream>
using namespace std;
class basic{
    private :
    int a;
    public:
    void get()
    {
        cout<<"Enter the value of a: "<<endl;
        cin>>a;

    }
    void print()
    {
        cout<<"the value of a is: "<<a<<endl;
    }
    void operator ++()//operator is keyowrd
    {
        a++;
    }
    void operator --()
    {
        a--;
        
    }
};
int main()
{
basic obj;
obj.get();
cout<<"Before increment: "<<endl;
obj.print();

obj.operator++();
cout<<"After the increment: "<<endl;
obj.print();

cout<<"After the Decrement: "<<endl;
obj.operator--();
obj.print();
}