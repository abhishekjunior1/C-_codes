#include<iostream>
using namespace std;
class sum{
    public:
    int num;
    sum(){}//important because obj is default constructor
    sum(int num)
    {
        this->num=num;
    }
    sum operator+ (sum obj2)
    {
        sum temp;
        temp=num + obj2.num;
        return temp;
    }
};
int main()
{
    sum obj1(10);
    sum obj2(10);
    sum obj3;//default constructor
    obj3=obj1 + obj2;//adding object
    
    cout<<obj3.num;//final ans 

}