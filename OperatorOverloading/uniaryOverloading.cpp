#include<iostream>
using namespace std;
class basic{
    private :
    int a,b,c;
    public:
    basic(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void print()
    {
        cout<<"the value of a,b,c is: "<<a<<" "<<b<<" "<<c<<endl;
       
    }
    void operator ++()//operator is keyowrd//pre-->incerment
    {
        a++;
        b++;
        c++;
    }
    void operator --()//decrement 
    {
        a--;
        b--;
        c--;
        
    }
    void operator+()//addition
    {
        c=a+b;
    }
};
int main()
{
basic obj(10,11,12);
cout<<"Before increment: "<<endl;
obj.print();

obj.operator++();
cout<<"After the increment: "<<endl;
obj.print();

cout<<"After the Decrement: "<<endl;
obj.operator--();
obj.print();

cout<<"Performaning addition: "<<endl;
obj.operator+();
obj.print();
}