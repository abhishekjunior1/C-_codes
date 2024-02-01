#include <iostream>
using namespace std;

int main() {
    int arr[6] = {2, 2, 4, 1, 4, 1};

    for (int i = 0; i < 6; i++) {
        int flag = 0; // Initialize a flag to 0 (not unique)

        for (int j = i + 1; j < 6; j++) { // Start from i + 1
            if (arr[i] == arr[j]) {
                flag ++; // Found a matching element, set flag to 1 (not unique)
                break;
            }
        }

        if (flag == 0) {
        cout << arr[i] << " "; // If flag is 0, the element is unique
        }
    }

    return 0;
}
