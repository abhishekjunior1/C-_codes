#include<iostream>
#include<algorithm>
using namespace std;


struct exp
{
  int sal;
  string name;
  void display(exp arr[])
  {
    cout<<"your ans: ";
    for(int i=0;i<3;i++){
    cout<<arr[i].sal<<" ";
    cout<<arr[i].name<<endl;
    }
  }
};
int main()
{
  exp obj;
  exp arr[3];
for(int i=0;i<3;i++)  
{
  cin>>arr[i].sal;
  cin>>arr[i].name;
}
obj.display(arr);
}