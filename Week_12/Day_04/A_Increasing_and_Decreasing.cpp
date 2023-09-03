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
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        vector<int> a(n);
        a[0] = x, a[n - 1] = y;
        int d = 1;
        for (int i = n - 2; i >= 1; --i)
        {
            a[i] = a[i + 1] - d;
            ++d;
        }
        bool ok = true;
        for (int i = 0; i + 1 < n; ++i)
        {
            if (a[i + 1] <= a[i])
            {
                ok = false;
            }
        }
        for (int i = 0; i + 2 < n; ++i)
        {
            int p = a[i + 1] - a[i];
            int q = a[i + 2] - a[i + 1];
            if (p <= q)
            {
                ok = false;
            }
        }
        if (!ok)
        {
            cout << "-1\n";
            continue;
        }
        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
