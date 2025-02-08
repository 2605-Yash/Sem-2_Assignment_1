#include <iostream>
using namespace std;

string filterstring(string str) {
    string original;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            original += tolower(str[i]);
        }
    }
    return original;
}

string reversestring(string str) {
    string reverse;
    for (int i = str.length() - 1; i >= 0; i--) {
        reverse += str[i];
    }
    return reverse;
}

int main() {
    string str, original, reverse;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "The string is: " << str << endl;
    original = filterstring(str);
    reverse = reversestring(original);
    if (original == reverse) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}