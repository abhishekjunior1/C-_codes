#include<iostream>
using namespace std;
class data{
  int a,b;
  public:
  void get();//-------OR------>void get(){
                            //cout<<"enter ";
                            //cin>>a>>b;
                                      //}
  friend int  sum(data);
};
void data ::get(){
  cout<<"enter ";
  cin>>a>>b;
}

int sum(data obj)
{
  return (obj.a+obj.b);
}
int main()
{
 data obj;
 obj.get();
 cout<<sum(obj);
 return 0;

}