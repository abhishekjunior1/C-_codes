// #include <iostream>

// enum class LetterType { Vowel, Consonant, Invalid };

// class LetterAnalyzer {
// public:
//     LetterType analyze(char c) {
//         if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
//             switch (c) {
//                 case 'a':
//                 case 'e':
//                 case 'i':
//                 case 'o':
//                 case 'u':
//                 case 'A':
//                 case 'E':
//                 case 'I':
//                 case 'O':
//                 case 'U':
//                     return LetterType::Vowel;
//                 default:
//                     return LetterType::Consonant;
//             }
//         }
//         return LetterType::Invalid;
//     }
// };

// int main() {
//     LetterAnalyzer analyzer;
//     char c;
//     std::cin >> c;

//     LetterType type = analyzer.analyze(c);

//     if (type == LetterType::Vowel) {
//         std::cout << "vowel" << std::endl;
//     } else if (type == LetterType::Consonant) {
//         std::cout << "consonant" << std::endl;
//     } else {
//         std::cout << "Invalid input" << std::endl;
//     }

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

union AccountData {
    float b;
};

union AccountNumber {
    int n;
};

struct Account {
    string nm;
    AccountData d;
    AccountNumber num;
};

void deposit(Account &a, float amt) {
    a.d.b += amt;
    cout << "Deposited." << endl;
}

void withdraw(Account &a, float amt) {
    if (a.d.b >= amt) {
        a.d.b -= amt;
        cout << "Withdrawn." << endl;
    } else {
        cout << "Insufficient funds." << endl;
    }
}

int main() {
    Account a;

    getline(cin, a.nm);
    cin >> a.num.n;
    cin >> a.d.b;

    float dAmt, wAmt;
    cin >> dAmt >> wAmt;

    deposit(a, dAmt);
    withdraw(a, wAmt);

    cout << "Details:" << endl;
    cout << "Name: " << a.nm << endl;
    cout << "Number: " << a.num.n << endl;
    cout << "Balance: " << a.d.b << endl;

    return 0;
}