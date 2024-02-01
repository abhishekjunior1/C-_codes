#include<iostream>
using namespace std;

// void add(int *ptr,int *ptrr)
// {
//   int c=*ptr + *ptrr;
//   cout<<"the value of addition of a and b :" <<c ;
//   cout <<endl;
// }

void largest(int *a,int *b,int *c)
{
  if(*a>*b && *a>*c)
  {
  cout<<"a is largest: "<<*a<<endl;   
  }
  else if (*b>*a && *b>*c)
  {
    cout<<"b is largest: "<<*b<<endl;   
  }
  else
  cout<<"c is largest: "<<*c;
 }
int main()
{
  int a,b,c;
  cout<<"enter a and b and c: ";
  cin>>a;
  cin>>b;
  cin>>c;
  // add(&a,&b);
  largest(&a,&b,&c);
  
}