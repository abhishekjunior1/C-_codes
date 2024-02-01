#include<iostream>
using namespace std;
class demo{
  public:
  int a,b;
  void get()
  {
    cin>>a>>b;
  }
  void display()
  {
    cout<<a<<" "<<b;
  }
};
int main()
{
  demo obj;//object of demo 
  demo *ptr;// demo ki pointer  to store address of obj
  ptr=&obj;
  ptr->get();
  ptr->display();
  return 0;
}