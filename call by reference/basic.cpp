#include <iostream>
using namespace std;

// void funct(int &a) {
//   a = 110000; 
// }

// int main() {

//   int arr[3]={1,2,3};
//   int *ptr=&arr[0];
//   cout<<*arr<<" "<<*(arr+1)<<" "<<*(arr+2);

//   // int z=10;
//   // int &y=z;//reference the z value so both y and z will have same value
//   // cout<<y<<" ";

//   int x = 10;
//   funct(x);
//   cout << x; 
//   return 0;
// }

int main()
{
  int p=1;
  int arr[7]={2,3,4,5,6,7,8};
  for(int i=0;i<6;i++)
  {
    p=p*arr[i];
  }
  cout<<p;
}
