//Write a program to take
 //name and cost of the item from the 
//user and write into the file 
//and again read from the file and display on 
//the screen
#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    ofstream out("question.txt",ios::app);
    for(int i=0;i<2;i++)
    {
    cout<<"Enter the name of item : ";
    string s;
    cin>>s;

    cout<<"Enter the cost of item: ";
    int a;
    cin>>a;

    out<<s<<"\n";
    out<<a;
    }
    out.close();
    
    ifstream in("question.txt");
    for(int i=0;i<2;i++)
    {
    string s;
    in>>s;
    int a;
    in>>a;
    cout<<"item name: "<<s<<endl;
    cout<<"price: "<<a<<endl;
    }

    in.close();



}