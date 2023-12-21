#include <iostream>
#include <vector>

using namespace std;


string Exists(vector<int>& a) {
    long long sum_a = 0;
    for (int i = 0; i < a.size(); ++i) {
        sum_a += a[i];
    }

  
    for (int i = 0; i < a.size(); ++i) {
        if (a[i]*2 != sum_a) {
            return "YES";
        }
    }

    return "NO";
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

        cout << Exists(a) << endl;
    }

    return 0;
}
