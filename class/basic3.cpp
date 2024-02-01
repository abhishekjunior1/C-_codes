#include<iostream>
#include<iomanip>
using namespace std;
class student{
  public:
  string name;
  string color;

};
// void modify(int &x)
// {
//  x=100;
// }
int main()
{
student obj;
obj.name="apple";
obj.color="red";
cout<<obj.name<<" "<<obj.color<<endl;

student *ptr=new student();
ptr->name="abhishek";
ptr->color="Kumar";
cout<<ptr->name<<" "<<ptr->color<<" ";
// int val=10;
// modify(val);
// cout<<val;



}