#include<iostream>
using namespace std;
enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturdy};
int main()
{
  week today,tommorow;
  today=wednesday;
  tommorow=saturdy;
  cout<<"day"<<today+1;
  return 0;

}
