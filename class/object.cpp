#include<iostream>
#include<string>
using namespace std;
class demo
{
  int a,b;
  public:
  void show()
  {
    a=10;
    b=10;
    cout<<"object address  "<<this<<endl;
    cout<<a<<" ";
    cout<<b;
  }

};
int main()
{
// demo obj;
// obj.show();
// cout<<endl;
// string s1("12");
// string s2("abh");
// cout<<s1.insert(4,s2);
cout<<endl;
int *a=nullptr;
cout<<*a;

}