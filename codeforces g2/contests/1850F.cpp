#include <iostream>
#include <vector>

using namespace std;

int maxFrogsCaught(int n, vector<int>& hops) {
    vector<int> frogs(n + 1, 0); // Initialize an array to keep track of frogs at each coordinate

    // Count the number of frogs passing through each coordinate
    for (int i = 0; i < n; i++) {
        int coordinate = min(n, i + hops[i]); // Limit coordinate to n
        frogs[coordinate]++;
    }

    // Find the coordinate with the maximum number of frogs
    int maxFrogs = 0;
    for (int i = 1; i <= n; i++) {
        maxFrogs = max(maxFrogs, frogs[i]);
    }

    return maxFrogs;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> hops(n);
        for (int i = 0; i < n; i++) {
            cin >> hops[i];
        }

        int maxFrogs = maxFrogsCaught(n, hops);
        cout << maxFrogs << endl;
    }

    return 0;
}
