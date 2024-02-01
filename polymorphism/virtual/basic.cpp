//agar 1 class student hai aur uska 2 child class test
//student-->test
// student-->sports
// resutlt=-->test,sports

                                //         student
                                // test                  sports
                                //     -->    result   <---

#include<iostream>
using namespace std;
class student{
    public:
     void print()
     {
        cout<<"I am father ";
     }
     void hii()
     {
        cout<<"hii"<<endl;
     }
};
class test: virtual public  student{//simle se baat hai virtual means aak cheej 2 baar  repeat nhi hoga koi v doo baar 
    public:
    void get()
    {
        print();
        hii();
    }
};
class sports:virtual public student{
    public:
    void get()
    {
        print();
    }
};
class result:public test,public sports{
    public:
    void get()
    {
        print();
        // hii();
    }

};

int main()
{
    result obj;
    obj.get();
    obj.hii();
}