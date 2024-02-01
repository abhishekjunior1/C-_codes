#include<iostream>
using namespace std;
class a{
    int n;
    public:
    a( int data)
    {
        n=data;
        cout<<"Enter the value of n: "<<n<<endl;
    }
    void display()
    {
        cout<<"hi Abhishek"<<endl;
    }
};
class b{
    public:
    int m;
    b(int data)
    {
        
        this->m=data;
        cout<<"Enter the value of m: "<<m<<endl;
    }

};
class c:public a,public b{
    int derived1,derived2;
    public:
    c(int data1,int data2,int data3,int data4)  :a(data1) , b(data2)//a mi deta send karo
    {
        derived1=data3;
        derived2=data4;
        cout<<data4;
    }

};
int main()
{
    c obj(10,20,30,40);
}
