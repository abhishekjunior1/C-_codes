#include<iostream>
#include<iomanip>
using namespace std;
class fruits{
  public:
  int a;
  int b;
  void getdata(int k,int x);
  void printdata(int a,int b);

};
void fruits::getdata(int k,int x){
  cout<<"enter the value :"<<endl;
cin>>a;
cin>>b;
cout<<k<<endl<<x<<endl;

}
void fruits ::printdata(int a,int b)
{
  cout<<a<<endl<<b;
}
int main()
{
  // fruits obj1= new fruits();
  fruits obj;
  obj.getdata(10,12);
  obj.printdata(1,2);
}