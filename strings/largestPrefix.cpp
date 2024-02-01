#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string LongestPrefix(string* str, int n) {
    // Sorting the array
    sort(str, str + n);
    string s1 = str[0];
    string s2 = str[n - 1];
    string ans = "";
    
    int minn = min(s1.length(), s2.length());
    for (int i = 0; i < minn; i++) {
        if (s1[i] == s2[i]) {
            ans += s1[i]; // Concatenate characters to the ans string
        } else {
            break;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of strings you want to insert: ";
    cin >> n;

    string str[100]; // Assuming a maximum of 100 strings (you can adjust this limit)

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    cout << "Longest Prefix: " << LongestPrefix(str, n) << endl;

    return 0;
}
