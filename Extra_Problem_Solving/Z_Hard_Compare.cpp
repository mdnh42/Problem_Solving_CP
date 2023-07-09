/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
}
ll power(ll base, ll exponent)
{
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
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

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    ll f = power(a, b);
    ll s = power(c, d);
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
