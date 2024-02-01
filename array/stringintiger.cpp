#include<iostream>
using namespace std;
int main()
{
  cout<<"enter size of array: "<<endl;
  int n;
  cin>>n;
  string arr[n];
  int ar[n];
  cout<<"enter string: ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    
  }
    cout<<"enter intiger: ";

  for(int i=0;i<n;i++)
  {
    cin>>ar[i];
    
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
    cout<<ar[i]<<" ";
    
  }

}