/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i], b[i]});
    }

    sort(v.begin(), v.end());

    ll ans = k;
    for (int i = 0; i < n; i++)
    {
        int a = v[i].first;
        int b = v[i].second;
        if (ans >= a)
        {
            ans += b;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
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
