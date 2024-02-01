#include<iostream>
using namespace std;
class color {
    public:
    virtual void paint()
    {
        cout<<"I am base class "<<endl;
    }
};
class redpaint:public color{
    public:
    void paint()
    {
        cout<<"I am red Paint \n";
    }

};
class bluepaint:public color{
    public:
    void paint()
    {
        cout<<"I am blue  Paint \n";
    }
    
};
int main()
{
    color * ptr;
    color obj;
    char ch;
    cin>>ch;
    ch=toupper(ch);
    switch(ch)
    {
        case 'R':
        {
            redpaint obj;
            ptr=&obj;
            ptr->paint();
            break;
        }
        case 'B':
        {
            bluepaint obj;
            ptr=&obj;
            ptr->paint();
            break;
        }
        default :
        {
            cout<<"Invalid choice : "<<endl;
            break;
        }
    }
    return 0;
}
