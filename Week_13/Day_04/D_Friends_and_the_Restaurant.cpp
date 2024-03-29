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
const int MAX_SIZE = 1e5 + 10;
int freq[MAX_SIZE] = {0};
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int d[n];
    for (int i = 0; i < n; i++)
    {
        d[i] = b[i] - a[i];
    }

    sort(d, d + n);

    int i = 0, j = n - 1, ans = 0;
    while (i < j)
    {
        int sum = d[i] + d[j];
        if (sum < 0)
            i++;
        else
            ans++, i++, j--;
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
