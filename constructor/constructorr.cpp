#include<iostream>
#include<iomanip>
using namespace std;
class first
{
  public:
  string name;
  int rollno;
  first()//default constructor
  {
    name="abhi";
    rollno=27;
  }
  first(string a,int b)//parametrise constructor
  {
    name=a;
    rollno=b;
  }


};
int main()
{
  first obj;
  cout<<obj.name<<" "<<obj.rollno<<endl;
  first obj1("srijana",3);
  cout<<obj1.name<<" "<<obj1.rollno<<endl;
  

}
