#include<iostream>
using namespace std;
template<class T>
T maxx(T a,T b)
{
    if(a>b)
    return a;
    else 
    return b;
}
int main()
{
    cout<<"Practise : "<<endl;
    cout<<maxx(10,20);

}