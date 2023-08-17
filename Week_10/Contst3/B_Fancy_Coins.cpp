#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;

        // Calculate the number of regular coins needed for k burles
        int regular_coins_for_k = (k - m % k) % k;

        // Calculate the number of regular coins needed to reach m
        int regular_coins_needed = (m - a1 + ak - 1) / ak;

        // Calculate the minimum number of fancy coins needed
        int fancy_coins_needed = max(0, regular_coins_needed - regular_coins_for_k);

        cout << fancy_coins_needed << endl;
    }

    return 0;
}
