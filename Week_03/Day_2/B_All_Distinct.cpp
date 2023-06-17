/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    set<ll> s;
    int p = n;
    while (n--)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    ll s1 = s.size();
    ll x = p - s1;
    if (x & 1)
    {
        cout << s1 - 1;
    }
    else
    {
        cout << s1;
    }
    cout << endl;
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