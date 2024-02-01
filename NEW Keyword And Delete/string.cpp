#include <iostream>
using namespace std;

int main() {
    string* str = new string;
    getline(cin, *str);

    for (int i = str->length() - 1; i >= 0; i--) {
        cout << (*str)[i];
    }

    // Don't forget to free the dynamically allocated string
    delete str;

    return 0;
}
