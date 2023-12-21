#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to calculate the minimum number of operations to make s a substring of x
int minOperationsToSubstring(const string& x, const string& s) {
    int n = x.length();
    int m = s.length();
    int result = m; 

    for (int i = 0; i < m; i++) {
        if (s.substr(0, i) == s.substr(m-i-1, i)) {
            result = m - i-1;
        }
    }

    return  result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int minOps = minOperationsToSubstring(x, s);
        cout << minOps << endl;
    }

    return 0;
}
