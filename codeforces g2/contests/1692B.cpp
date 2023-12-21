#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        int extra = 0;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n);
        int prev = b[0];
        for (int i = 0; i < n; i++)
        {
            if (prev == b[i])
            {
                count++;
            }
            else
            {
                extra += count - 1;
                count = 1;
                prev = b[i];
            }
        }
        extra += count - 1;
        if (extra % 2 == 0)
        {
            cout << n - extra << endl;
        }
        else
        {
            cout << n - 1 - extra << endl;
        }
    }
    return 0;
}