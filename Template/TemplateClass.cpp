#include<iostream>
using namespace std;
#include<cmath>
template<class T>
class example{
    T a,b;
    public:
    example(T a,T b)
    {
        this->a=a;
        this->b=b;
    }
    void calculator()
    {
        cout<<a*b;
        cout<<endl<<abs(a-b);
    }

};
int main()
{
    example<int> obj(10,20);
    obj.calculator();
}