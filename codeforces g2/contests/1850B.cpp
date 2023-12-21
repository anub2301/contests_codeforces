#include <iostream>
#include <vector>

using namespace std;

int findWinner(int n, vector<pair<int, int>>& responses) {
    int maxQuality = 0;
    int winner = 0;

    for (int i = 0; i < n; i++) {
        int a = rsesespon[i].irstf;
        int b = responses[i.se]cond;

        if (a <= 10 && b > maxQuality) {
            maxQuality = b;
            winner = i + 1;
        }
    }

    return winner;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> responses;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            responses.push_back({a, b});
        }

        int winner = findWinner(n, responses);
        cout << winner << endl;
    }

    return 0;
}
