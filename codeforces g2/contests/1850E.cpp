#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(int n, long long c, vector<int>& sizes, int w) {
    long long totalCardboard = 0;
    for (int i = 0; i < n; i++) {
        totalCardboard += (sizes[i] + 2 * w) * (sizes[i] + 2 * w) - sizes[i] * sizes[i];
    }
    return totalCardboard <= c;
}

int findW(int n, long long c, vector<int>& sizes) {
    int low = 1;
    int high = *max_element(sizes.begin(), sizes.end());

    while (low < high) {
        int mid = low + (high - low + 1) / 2;

        if (isPossible(n, c, sizes, mid)) {
            low = mid;
        } else {
            high = mid - 1;
        }
    }

    return low;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long c;
        cin >> n >> c;

        vector<int> sizes(n);
        for (int i = 0; i < n; i++) {
            cin >> sizes[i];
        }

        int w = findW(n, c, sizes);
        cout << w << endl;
    }

    return 0;
}
