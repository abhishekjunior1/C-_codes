#include<iostream>
using namespace std;
int main()
{
  int arr[6]={1,2,2,2,3,1};
  // int count=0;
  for(int i=0;i<5;i++)
  {
    for(int j=i+1;j<6;j++)
    {
      int count =1;
      if(arr[i]==arr[j])
      {
        count ++;
        cout<<"frequency:"<<arr[i]<<" "<< count<<endl;
      }
      // else
     
      // cout<<count;
    }
  }
  
}