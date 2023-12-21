#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Sort the input sequence 'a'
        sort(a.begin(), a.end());
        
        // Find the minimum value of bn
        int min_b = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] >= min_b) {
                min_b++;
            }
        }
        
        cout << min_b << endl;
    }
    
    return 0;
}
