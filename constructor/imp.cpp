#include<istream>
using namespace std;
class a{
    public:
    a()
    {
        cout<<"i am class a constructor ";
    }
};
class b: public  a{
    public:
    b()
    {
        cout<<"i am class b constructor ";
    }
};
class c: public b{
    public:
    c()
    {
        cout<<"i am class c constructor ";
    }
};
int main()
{

c obj;
}