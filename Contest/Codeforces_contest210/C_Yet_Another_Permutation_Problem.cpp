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

    vector<int> permutation;
    for (int i = 1; i <= n; i++)
    {
        permutation.push_back(i);
    }

    if (n % 2 == 0)
    {

        for (int i = 0; i < n; i += 2)
        {
            swap(permutation[i], permutation[i + 1]);
        }
    }
    else
    {
        for (int i = 0; i < n - 1; i += 2)
        {
            swap(permutation[i], permutation[i + 1]);
        }
        swap(permutation[n - 2], permutation[n - 1]);
    }

    for (int num : permutation)
    {
        cout << num << " ";
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
