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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll k;
    cin >> k;
    ll i = 0, j = 0;
    queue<int> q;
    while (j < n)
    {
        if (a[j] < 0)
            q.push(a[j]);
        if (j < k - 1)
        {
            j++;
        }
        else
        {
            if (q.empty())
                cout << 0 << " ";

            else
            {
                cout << q.front() << " ";
            }
            if (a[i] < 0)
            {
                q.pop();
            }
            i++;
            j++;
        }
    }
    return 0;
}
