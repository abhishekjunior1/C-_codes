#include<iostream>
using namespace std;
class counter{
    int id;
    public:
    counter(int i)
    {
        id=i;
        cout<<"Constructor of object with id= "<<id<<endl;
    }

   ~counter()
    {
        cout<<"destructor with id = "<<id<<endl;
    }
    
};


int main()
{
    counter c1(1);
    counter c2(2);
    counter c3(3);
    cout<<"end of main"<<endl;
    

}