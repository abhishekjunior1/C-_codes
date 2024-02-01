#include <iostream>
using namespace std;
void funct(int a,int b)
{
    if(a-b==0)
    throw a ;
    else
    cout<<"hello world ";

}
int main()
{
	try {
	funct(10,10);
	}
	
	catch (...) {//int a;
        // cout<<a;
		cout << "Default Exception\n";
	}
	return 0;
}
