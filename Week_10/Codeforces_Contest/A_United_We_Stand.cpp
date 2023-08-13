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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b, c;

    sort(a.begin(), a.end());

    int sameValue = a[0];
    b.push_back(sameValue);

    for (int i = 1; i < n; i++)
    {
        if (a[i] == sameValue)
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }

    if (!c.empty())
    {
        cout << b.size() << " " << c.size() << "\n";
        for (int num : b)
        {
            cout << num << " ";
        }
        cout << "\n";
        for (int num : c)
        {
            cout << num << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << "-1\n";
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
