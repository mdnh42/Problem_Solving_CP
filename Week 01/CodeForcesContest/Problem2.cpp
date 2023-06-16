// https://codeforces.com/contest/1840/problem/B

/*
    itzmrnh
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int ways = 0;

        for (int i = k - 1; i >= 0; i--)
        {
            int cost = 1 << i;
            if (n >= cost)
            {
                n -= cost;
                ways++;
            }
        }
        cout << ways << endl;
    }

    return 0;
}
