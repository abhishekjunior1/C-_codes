#include<iostream>
using namespace std;
class celci
{
    private:
    double *cel;
    public:
    celci(double c)
    {
        this->cel= new double(c);
    }
    double celtofer()
    {
        return (1.8)*(*cel)+32;
    }
};
int main()
{
    celci obj(37.0);
    cout<<obj.celtofer();

}