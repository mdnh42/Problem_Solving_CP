/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define SIZE 26;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(), v.end()
void solve()
{
    ll n, m, d;
    cin >> n >> m >> d;

    vector<ll> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    ll sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int cur = a[i];
        int nxt = a[i + 1];
        sum += (nxt - cur - 1) / d;
    }

    if (a[0] != 1)
    {
        sum += (a[0] - 1) / d;
        sum += 1;
    }

    sum += (n - a[m - 1]) / d;
    vector<ll> con(m);
    for (int i = 1; i < m - 1; i++)
    {
        ll prv = a[i - 1];
        ll nxt = a[i + 1];
        ll now = a[i];
        ll tmp = sum;
        tmp -= (now - prv - 1) / d;
        tmp -= (nxt - now - 1) / d;

        tmp--;
        tmp += (nxt - prv - 1) / d;
        con[i] = tmp;
        ans = min(ans, tmp);
    }
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
