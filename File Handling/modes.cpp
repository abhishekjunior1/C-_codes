#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    ofstream out;
    out.open("mod.txt",ios::app );
    out<<"Abhishek work hard ";
    out.close();
    ifstream in;
    in.open("mod.txt");
    while(in)
    {
        string s;
        in>>s;
        cout<<s<<" ";
    }
}