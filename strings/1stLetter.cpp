#include<iostream>
using namespace std;
#include<stack>
#include<cctype>
#include<string>
// #define n=10;
void rev(string str)
    {
        stack<string> st;
        for(int i=0;i<str.length();i++)
        {
            string s="";
            while(str[i]!=' ')
            {
                s=s+ str[i];
                i++;
            }
            st.push(s);
        }
        while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
       

    }

int main()
{
    string str="hii how you doing jsj";//234+/
    // rev(str);
    // cout<<str[0]<<" ";
    for(int i=0;i<str.length();i++)
        {
            
            while(str[i]!=' ')
            {
                i++;
            }
            int j=i;
            cout<<(char)toupper(str[j+1])<<" ";
        }
    }