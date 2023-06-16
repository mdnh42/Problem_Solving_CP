// https: // codeforces.com/group/MWSDmqGsZm/contest/326907/problem/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long L, R;
        cin >> L >> R;
        if (L > R)
            swap(L, R);
        long long sum = (R * (R + 1)) / 2 - (L * (L - 1)) / 2;
        cout << sum << '\n';
    }

    return 0;
}
