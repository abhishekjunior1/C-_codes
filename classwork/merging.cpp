#include<iostream>
using namespace std;

int main() {
    int arr[3] = {1, 3, 3};
    int ar[4] = {1, 2, 3, 4};
    int mer[7];
    int count = 0;

    for (int i = 0; i < 3; i++) {
        mer[i] = arr[i];
        count++;
        // cout<<mer[i]<<" ";
        
    }
    cout << count << " " << endl;

    for (int i = 0; i < 4; i++) {
        mer[count] = ar[i];  // Use count directly here
        count++;
    }
    
    cout << "Merged array: ";
    for (int i = 0; i < 7; i++) {
        cout << mer[i] << " ";
    }

    cout << endl;

    for(int i=0;i<6;i++)
    {
      for(int j=1;j<7;j++)
      {
        if(mer[i]==arr[j])
        {
          j++;

        }
        
      }
    }

    return 0;
}
