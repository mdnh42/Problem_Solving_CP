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
    int n, k;
    cin >> n >> k;
    k %= (n + 1);
    vector<int> a(n);

    vector<bool> vis(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        vis[i] = 1;
    }

    int nai = -1;
    for (int i = 0; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            nai = i;
        }
    }

    deque<int> dq(a.begin(), a.end());
    for (int i = 0; i < k; i++)
    {
        int val = nai;
        dq.push_front(val);
        nai = dq.back();
        dq.pop_back();
    }

    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " ";
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
