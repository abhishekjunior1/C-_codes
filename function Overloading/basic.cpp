#include <iostream>
using namespace std;

void funct(int &a) {
  a = 110000; 
}

int main() {

  // int arr[3]={1,2,3};
  // int *ptr=&arr[0];
  // cout<<*arr<<" "<<*(arr+1)<<" "<<*(arr+2);
  
  int x = 10;
  funct(x);
  cout << x; 
  return 0;
}

