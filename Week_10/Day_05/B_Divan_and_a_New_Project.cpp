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
#define ff first
#define ss second
void solve()
{
    int n;
    cin >> n;

    pair<ll, ll> arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].ff;
        arr[i].ss = i;
    }

    sort(arr, arr + n);

    ll time = 0;
    int ans[n];
    int idx = 1;
    for (int i = n - 1; i >= 0; i -= 2)
    {
        ll temp = 2 * idx;
        time = time + (arr[i].ff) * temp;
        ans[arr[i].ss] = idx;

        idx++;
    }

    idx = -1;
    for (int i = n - 2; i >= 0; i -= 2)
    {
        int temp = 2 * abs(idx);
        time = time + (arr[i].ff) * temp;
        ans[arr[i].ss] = idx;

        idx--;
    }

    cout << time << endl;
    cout << 0 << ' ';
    for (int i = 0; i < n; i++)
        cout << ans[i] << ' ';
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
