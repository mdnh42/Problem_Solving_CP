/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d1 = a - 1;
    int d2 = abs(b - c) + c - 1;

    int ans = 0;

    if (d1 <= d2)
    {
        ans += 1;
    }
    if (d1 >= d2)
    {
        ans += 2;
    }

    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
