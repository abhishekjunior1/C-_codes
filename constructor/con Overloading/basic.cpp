#include<iostream>
using namespace  std;
class abc_overloading
{
int x,y,z;
public:
abc_overloading()//default const
{
    x=2;
    y=3;  
}
abc_overloading(int a,int b)//parametrized//overlaoding
{
    x=a;
    y=b;
    cout<<x<<" "<<y<<endl;

}
abc_overloading(int a,int b,int c)//parametrized//overloading
{
    x=a;
    y=b;
    z=c;
    cout<<x<<" "<<y<<" "<<z<<endl;


}
void display()
{
    cout<<x*y<<endl;
}

};
int main()
{
    abc_overloading obj;
    obj.display();
    abc_overloading obj1(1,2,3);
    abc_overloading obj2(1,2);


}