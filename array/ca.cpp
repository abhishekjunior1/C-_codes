#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    int id ;
    int *arr;
    int lala;//storing sum of subject;

    void input() {
        std::cout << "Enter Id : ";
        std::cin >> id;

        cout<<"Enter n0 of subjext ";
        int n;
        cin>>n;
        arr=new int(n);//crearing 3 size ka array
        lala=cal(arr,n);
       
    }
    int  cal(int arr[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        // cout<<sum/3;
        // cout<<endl;
        return sum;

    }
    void display()
    {
        cout<<lala;
        cout<<endl;
    }


};

int main() {

    Student student;
    for(int i=0;i<2;i++)
    {
    student.input();
    student.display();
    }

    return 0;
}
