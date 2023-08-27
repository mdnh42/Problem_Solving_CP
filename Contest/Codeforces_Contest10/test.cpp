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
    int n;
    cin >> n;

    int l;
    cin >> l;
    int mn = INT_MAX;
    int sum = 0;
    for (int i = 0; i < l; i++)
    {
        int x;
        cin >> x;
        if (mn > x)
            mn = x;
    }

    for (int i = 1; i < n; i++)
    {
        map<int, int> mp;
        cin >> l;
        for (int j = 0; j < l; j++) // Rename loop variable i to j
        {
            int x;
            cin >> x;
            if (mn > x)
                mn = x;
            mp[x]++;
        }

        auto it = mp.begin();
        it++; // Move to the second element
        const auto val = it->first;
        sum += val;
    }

    sum += mn;
    cout << sum << '\n';
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
