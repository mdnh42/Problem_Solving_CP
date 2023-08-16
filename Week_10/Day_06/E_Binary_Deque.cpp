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
ll query(int l, int r, vector<ll> &p)
{
    return p[r] - (l ? p[l - 1] : 0);
}
void solve()
{
    int n, s;
    cin >> n >> s;
    vector<ll> a(n), p(n);
    forn(i, n)
    {
        cin >> a[i];
        p[i] = a[i];
        if (i)
            p[i] += p[i - 1];
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        int l = i, r = n - 1, pos = -1;
        while (l <= r)
        {
            int mid = l + r >> 1;
            if (query(i, mid, p) <= s)
            {
                pos = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if (pos == -1 || query(i, pos, p) != s)
            continue;
        ans = min(ans, n - (pos - i + 1));
    }

    cout << (ans == INT_MAX ? -1 : ans) << "\n";
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
