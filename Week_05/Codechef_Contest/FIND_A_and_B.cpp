/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;
    ll a = x * y;
    ll b = y * z;
    ll c = x * z;
    if (a % z == 0)
        cout << a << " " << z << "\n";
    else if (b % x == 0)
        cout << b << " " << x << endl;
    else if (c % y == 0)
        cout << c << " " << y << endl;
    else
        cout << -1 << endl;
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
