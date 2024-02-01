#include<iostream>
using namespace std;
class vehical{//base class
    public:
    float dis;
    float time;
    void inputdata()
    {
        cout<<"Enter the value of Distance and time: ";
        cin>>dis>>time;
    }

};
class car:public vehical{//drived class
    float s;
    public:
    car()
    {
        inputdata();
        s=dis/time;
        cout<<s;
    }
};
int main()
{
    car obj;
    return 0;
}