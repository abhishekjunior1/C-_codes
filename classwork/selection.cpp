#include<iostream>
using namespace std;
int main()
{
  int arr[]={5,1,3,4,6,2};
  // int n =length(arr);
  for(int i=0;i<5;i++)
  {
    int min=i;
    for(int j=i+1;j<6;j++)
    {
      if(arr[j]<arr[min])
      {
        min=j;
      }
    }
    if(min!=i)
    {
      int temp=arr[min];
      arr[min]=arr[i];
      arr[i]=temp;
    }
  }
  for(int i=0;i<6;i++)
  {
    cout<<arr[i]<<" ";
  }
}