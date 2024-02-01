#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
#include<deque>
#include<stack>
#include<queue>
int main()
{
    // stack<int> st;
    // st.push(10);
    // // st.pop();
    // cout<<st.top();

    queue<int>qu;
    qu.push(10);
    qu.push(11);
    qu.push(12);
    qu.pop();
  //-------------->  cout  << qu.front()  <<" ";
    //---------->  cout  <<  qu.back();
    cout<<qu.size();









    deque<int>de;
    int n=1;
    if(n==10)
    while(1)
    {
        cout<<"enter the choice: ";
        int choice;
        cin>>choice;
        switch (choice)
        {
            case 1:
            {
                cout<<"Insertion: "<<endl;
                int data;
                cin>>data;
                de.push_back(data);
                // de.push_front(data);
                break;
            }
            case 2:
            {
                cout<<"Element poped: ";
                de.pop_back();
                // de.pop_front();
                cout<<endl;
                break;
            }
            case 3:
            {
                cout<<"Printing: "<<endl;
                deque<int>::iterator i;
                for( i=de.begin();i<de.end();i++)
                cout<<*i<<" ";
                cout<<endl;
                break;
                
            }
            case 4:
            {
                cout<<"Execting the program : ";
                return 0;
            }
            default:
            {
                cout<<"Invalid number: "<<endl;
            }

        }
    }
}