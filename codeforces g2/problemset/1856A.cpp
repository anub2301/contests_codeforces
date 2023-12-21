#include <iostream>
#include <vector>

using namespace std;
int alphenOperations(vector<int>& a) {
    int operations = 0;
    bool sorted = false;

    while (!sorted) {
        sorted = true;
        for (int i = 1; i < a.size(); ++i) {
            if (a[i] < a[i - 1]) {
                a[i] = max(0, a[i] - 1);
                sorted = false;
            }
        }
        if (!sorted) {
            ++operations;
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int operations = alphenOperations(a);
        cout << operations << endl;
    }

    return 0;
}
