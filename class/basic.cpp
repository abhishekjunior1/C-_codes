#include<iostream>
#include<iomanip>
using namespace std;
class fruits{
  public:
  int a;
  int b;
  void getdata(void);
  void printdata(void);

};
void fruits::getdata(void){
cin>>a;
cin>>b;
}
void fruits ::printdata(void)
{
  cout<<a<<endl<<b;
}
int main()
{
  // fruits obj1= new fruits();
  fruits obj;
  obj.getdata();
  obj.printdata();
}