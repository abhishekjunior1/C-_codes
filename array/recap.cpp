#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    int pririty;


};
void display(student arr[],int n)
{
    cout<<"printing greator values : "<<endl;
    for(int i=1;i<=n;i++)
    {
            if(arr[i].pririty==1)
            {
            cout<<arr[i].name<<" "<<arr[i].roll<<endl;
            }
        
    }
}
int main()
{ 
    student obj;
    student arr[3];
    cout<<"Enter the details: ";
    for(int i=0;i<3;i++)
    {
        cin>>arr[i].name;
        cin>>arr[i].roll;
        cin>>arr[i].pririty;
    }
    display(arr,3);

}