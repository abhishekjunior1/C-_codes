#include<iostream>
using namespace std;
class student
{
  private:
  int roll;
  float marks;
  public:
  void get (int a,float b);
  void put()
  {
    cout<<"enter the roll: "<<roll <<endl;
    
    cout<<"enter the marks: "<<marks<<endl;
  
  }
};
void student ::get(int a,float b){
  roll=a;
  marks=b;

}
int main()
{
  student obj;
  obj.get(10,10.10);
  obj.put();
  return 0;
}