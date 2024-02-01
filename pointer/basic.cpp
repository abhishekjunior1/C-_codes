#include<iostream>
using namespace std;
int main()
{
  int a=10;
  int *ptr=&a;
  cout<<ptr<<" "<<*ptr<<endl;
  int arr[3]={1,2,3};
  // int *ptrr=&arr[0];
  int *ptrr=arr;
  cout<<*(ptr)<<" ";
  cout<<"printing value of next index: "<<*(ptrr+2);

  // int **address=&ptrr;
  // cout<<address;
  
}