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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto it1 = lower_bound(a.begin(), a.end(), x);
        auto it2 = upper_bound(a.begin(), a.end(), x);
        int idx1 = it1 - a.begin();
        int idx2 = it2 - a.begin();

        if (idx1 == 0)
            cout << "X ";

        else
            cout << a[idx1 - 1] << " ";

        if (idx2 == n)
            cout << "X" << endl;
        else
            cout << a[idx2] << endl;
    }
    return 0;
}
