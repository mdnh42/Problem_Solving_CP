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
    ll n, k, x, min, count = 0;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i += k)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> x;
            count++;
            if (j == 0)
            {
                min = x;
            }
            if (x < min)
            {
                min = x;
            }
            if (count == n)
            {
                break;
            }
        }
        cout << min << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
