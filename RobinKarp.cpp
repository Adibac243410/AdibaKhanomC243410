
#include <iostream>
using namespace std;

int hashValue(string s) {
    int hash = 0;
    for (char c : s)
        hash += c;
    return hash;
}

int main() {
    string text, pattern;

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter pattern: ";
    getline(cin, pattern);

    int n = text.length();
    int m = pattern.length();

    int patternHash = hashValue(pattern);

    for (int i = 0; i <= n - m; i++) {
        string sub = text.substr(i, m);

        if (hashValue(sub) == patternHash) {
            if (sub == pattern) {
                cout << "Found at index: " << i << endl;
            }
        }
    }

    return 0;
}
