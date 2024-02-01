#include<iostream>
using namespace std;
void funct(int a)
{
  cout<<a<<endl;
}

void fun(int a=5)
{
  cout<<a <<endl;
}

void fact(int a,int b,int c)
{
cout<<a<<" " <<b<<" "<<c<<endl;
}

int main()
{
  fact(10,20,30);
  funct(10);
  
  fun(2);
}