#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    int c = 0;
    int ans = a;
    while (a >= 1)
    {

        c += a % b;
        a = a / b;

        if (c / b >= 1)
        {
            a += c / b;
            c -= b * (c / b);
        }
        ans = ans + a;
    }
    cout << ans << endl;
    return 0;
}