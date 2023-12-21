#include <iostream>
#include <stack>
#include <string>

using namespace std;

string processKeyPresses(const string& input) {
    stack<char> result;

    for (char ch : input) {
        if (ch == 'b' || ch == 'B') {
            if (!result.empty() && isalpha(result.top())) {
                result.pop();
            }
        } else {
            result.push(ch);
        }
    }

    string finalString;
    while (!result.empty()) {
        finalString = result.top() + finalString;
        result.pop();
    }

    return finalString;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();  // consume the newline character after reading t

    while (t--) {
        string input;
        getline(cin, input);

        string result = processKeyPresses(input);
        cout << result << endl;
    }

    return 0;
}
