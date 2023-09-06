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
    int n, m;
    cin >> n >> m;

    if (((n % 2 == 0) && (m % 2 == 1) || (m < n)))
    {
        cout << "NO" << endl;
    }
    else if ((n % 2) == 1)
    {
        cout << "YES" << endl;

        for (int i = 1; i < n; i++)
        {
            cout << "1 ";
        }
        cout << m - n + 1 << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 2; i < n; i++)
        {
            cout << "1 ";
        }
        cout << (m - n + 2) / 2 << ' ' << (m - n + 2) / 2 << endl;
    }
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
