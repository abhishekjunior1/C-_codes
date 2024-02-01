// You are using GCC
#include<iostream>
using namespace std;
int main()
{
  cout<<"enter n value: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter array 1 element value: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter m value: ";
    int m;
    cin>>m;
    int ar[m];
    cout<<"enter array 2  value: ";
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    
    int k=n+m;
    int mer[k];
    int count =0;
    for(int i=0;i<n;i++)
    {
       mer[i]=arr[i]; 
       count++;

    }

    
    for(int i=0;i<m;i++)
    {
       mer[count]=ar[i]; 
      count++;
    
    }
    
    cout<<"printing merged array value: ";
    for(int i=0;i<k;i++)
    {
       cout<<mer[i]<<" ";  
    }
    cout<<endl;
    
    int l;
    for(int i=0;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(mer[i]==mer[j])
            {
                for(l=j;l<k-1;l++)
                {
                    mer[l]=mer[l+1];
                }
                k--;
                j--;
            }
        }
    }
    cout<<"final array: ";
    for(int i=0;i<k;i++)
    {
        cout<<mer[i]<<" ";
    }
    
    
   
}