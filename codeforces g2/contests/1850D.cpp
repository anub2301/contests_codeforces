#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumProblemsToRemove(int n, int k, vector<int>& difficulties) {
    sort(difficulties.begin(), difficulties.end());

    int minRemoved = n - 1;
    for (int i = 0; i < n - 1; i++) {
        int j = upper_bound(difficulties.begin(), difficulties.end(), difficulties[i] + k) - difficulties.begin();
        minRemoved = min(minRemoved, n - (j - i));
    }

    return minRemoved;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> difficulties(n);
        for (int i = 0; i < n; i++) {
            cin >> difficulties[i];
        }

        int minRemoved = minimumProblemsToRemove(n, k, difficulties);
        cout << minRemoved << endl;
    }

    return 0;
}
