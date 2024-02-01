#include<iostream>
using namespace std;
class time{
    int h ,m;
    public:
    time()
    {
        h=m=0;
    }
    time(int t)
    {
        h=t/60;
        m=t%60;
    }
    void print()
    {
        cout<<h<<"hrs "<<m<<"mins"<<endl;
    }

};
int main()
{
 int min;
 cin>>min;
 time obj1(min);
 obj1.print();

 int min2;
 cin>>min2;
 time obj2;
 obj2=min2;
 obj2.print();



}