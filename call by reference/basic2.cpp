#include<iostream>
using namespace std;

void change( int &n  ,int &m)
{
 n=500;
 m=1;
 cout<<n<<" "<<m<<endl;
}
int main(){
 int p=10;
 int q=100;
  // cout<<q++<<endl;
  change(p,q); 
  cout<<p <<" "<< q;
  // cout<<&p<<" "<<&q;
}