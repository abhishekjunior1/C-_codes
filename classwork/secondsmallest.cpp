#include <iostream>
using namespace std;

int main() {
    int arr[4] = {12, 21, 0, 1};
    int min = arr[0];
    for (int i = 0; i < 3; i++) {//i loop is not required 
        for (int j = i + 1; j < 4; j++) {
            if (arr[j] < min) {
                min = arr[j];
            }
        }
    }
    cout << min<<" ";
    int newmin=arr[0];
    for (int i = 1; i < 4; i++)
    {
        if(arr[i]<newmin && arr[i]>min)
        {
            // cout<<newmin;
            newmin=arr[i];
        }
        
    }
    cout<<newmin;
}
