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
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                a.push_back(i);
                if (n / i != i)
                {
                    a.push_back(n / i);
                }
            }
        }
        sort(a.begin(), a.end());
        if (a.size() < k)
        {
            cout << -1 << '\n';
            return 0;
        }

        else
        {
            cout << a[k - 1] << endl;
            return 0;
        }
    }
    return 0;
}
