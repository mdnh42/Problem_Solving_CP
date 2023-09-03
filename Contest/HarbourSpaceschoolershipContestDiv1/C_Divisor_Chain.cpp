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
    int x;
    cin >> x;
    vector<int> ans;
    int now = 1;

    while (now <= x)
    {
        ans.push_back(now);
        now *= 2;
    }

    if (ans.back() != x)
    {
        int diff = x - ans.back();
        for (int i = 30; i >= 0; i--)
        {
            if (diff & (1 << i))
            {
                ans.push_back(ans.back() + (1 << i));
            }
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;

    for (int i : ans)
    {
        cout << i << " ";
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
