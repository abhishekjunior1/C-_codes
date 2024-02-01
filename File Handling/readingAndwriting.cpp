#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    string ss;
    getline(cin,ss);
    ofstream out("abhi.txt");//for writing  in txt file 
    out<<ss;
    out.close();

    ifstream in("abhi.txt");//for reading in screen we need to store it then we can read in console screen
    string s;
    getline(in,s);

    cout<<s;
}