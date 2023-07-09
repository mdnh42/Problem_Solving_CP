/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll f = pow(a, b);
    ll s = pow(c, d);
    if (f > s)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
