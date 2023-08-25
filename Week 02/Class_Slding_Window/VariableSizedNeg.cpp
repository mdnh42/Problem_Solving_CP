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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    int ans = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == k)
        {
            ans = max(ans, i - 1);
        }
        if (mp.find(sum - k) != mp.end())
        {
            int index = mp[sum - k];
            ans = max(ans, i - index);
        }
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }
    cout << ans << endl;
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
