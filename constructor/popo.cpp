#include <iostream>
using namespace std;

class stack{
    public:
    int s;
    int *arr;
    int top;
    stack(int s)
    {
        arr=new int[s];

    }
};

class demo{
    public:
    int *arr;
    demo()
    {
        arr=new int [5]{1,2,3};
        for(int i=0;i< 3;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    demo *ptr =new demo();
    demo *ptrr =new demo();

}