#include <iostream>
#include <string>

using namespace std;

bool canMakeAlternatingBinaryString(const string& s) {
    char prev = '2';  // Initialize prev to a character that won't match the first character.
    
    for (char c : s) {
        if (c == prev) {
            return false;  // If two adjacent characters are the same, it's not possible.
        }
        
        prev = c;
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        
        cin >> n >> s;
        
        if (canMakeAlternatingBinaryString(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
