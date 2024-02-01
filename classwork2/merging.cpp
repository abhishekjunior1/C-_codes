#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 50, 20, 40};
    int ar[] = {30, 5, 15, 9};
    int merging[8];
    int a = 0; // Initialize 'a' to 0

    for (int i = 0; i < 4; i++) { // Loop over the elements of 'arr'
        merging[a] = arr[i];
        a++;
    }

    for (int i = 0; i < 4; i++) { // Loop over the elements of 'ar'
        merging[a] = ar[i];
        a++;
    }

    for (int i = 0; i < 8; i++) {
        cout << merging[i] << " ";
    }

    return 0;
}
