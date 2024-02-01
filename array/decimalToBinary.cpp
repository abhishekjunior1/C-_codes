#include<iostream>
using namespace std;

int main() {
    int num ;
    cin>>num;
    int arr[1000] ;
    int count = 0;

    int i = 0;
    while (num != 0) {//10
        arr[i] = num % 2;//01
        i++;
        count++;
        num = num / 2;//5
    }

    for (int i = count-1 ; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
