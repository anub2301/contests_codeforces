#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    vector<vector<int>> ranges(m);
    for (int j = 0; j < m; j++) {
      int l, r;
      cin >> l >> r;
      ranges[j] = {l, r};
    }

    unordered_set<string> seen;
    seen.insert(s);

    for (int j = 0; j < m; j++) {
      string t = s;
      for (int k = ranges[j][0]; k <= ranges[j][1]; k++) {
        int x = t[k] - '0';
        if (x == 0) {
          t[k] = '1';
        } else {
          t[k] = '0';
        }
      }

      if (seen.find(t) == seen.end()) {
        seen.insert(t);
      }
    }

    cout << seen.size() << endl;
  }

  return 0;
}
