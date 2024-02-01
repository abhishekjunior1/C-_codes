#include <iostream>
using namespace std;
#include <fstream>

int main() {
    string a = "Abhishek how are you";
    ofstream out("abhi.txt"); // for writing
    out << a;
    // out << " aur bhai kya haal hai";
    out.close(); // Close the output file before opening it for reading


    string s;
    ifstream in("abhi.txt"); // for reading
     getline(in, s) ;
      cout << s << endl;
    
    in.close(); // Close the input file

    return 0;
}
