#include<iostream>
using namespace std;
template<class t>
t maxema(t a,t b)
{
    return (a > b)?a:b;
}
int main()
{
    cout<< maxema<int> (3,7)<<  endl;
    cout<< maxema<int> (10,22)<<endl;
}