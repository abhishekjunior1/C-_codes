#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int age=22,rollno=11;
  cout<<setfill('#');
  cout<<setw(4)<<age<<setw(6)<<rollno<<endl;

  double f=3.14159;//>5=nearest value 
  cout<<setprecision(5)<<f<<'\n';//5---after.5 digit i.e 60
  cout<<setprecision(4)<<f<<'\n';//3.1420
  cout<<fixed;
  cout<<setprecision(5)<<f<<'\n';//fixed is only for this line

  cout<<setprecision(4)<<f<<'\n';
  // float a=

}