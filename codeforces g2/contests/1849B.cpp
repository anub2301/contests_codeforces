#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, k;
    cin >> n >> k;

    vector<int> health(n);
    for (int j = 0; j < n; j++) {
      cin >> health[j];
    }

    vector<int> order;
    while (n > 0) {
      int max_index = 0;
      int max_health = 0;
      for (int j = 0; j < n; j++) {
        if (health[j] > max_health) {
          max_index = j;
          max_health = health[j];
        }
      }

      order.push_back(max_index);
      health[max_index] -= k;
      if (health[max_index] <= 0) {
        n--;
      }
    }

    for (int j = order.size() - 1; j >= 0; j--) {
      cout << order[j] + 1 << " ";
    }
    cout << endl;
  }

  return 0;
}
