#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
int main()
{
    // vector<int> arr(5);
    // cout<<"Enter the elements ";
    // for(int i=0;i<5;i++)
    // {
    //     cin>>arr[i];
    // }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    vector <int > arr;
    while(1)
    {
        int data;
        cin>>data;
        if(data<0)
        break;
        arr.push_back(data);
    }
    // for(int i=0;i<arr.size();i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // arr.pop_back();
    // arr.pop_back();
    // for(auto i=arr.begin();i!=arr.end();i++)
    // {
    //     cout<<*i<<" ";
    // }
   
    vector<int> :: iterator it;
    for(it=arr.begin(); it<arr.end();it++ )
    cout<<*it;

    

}