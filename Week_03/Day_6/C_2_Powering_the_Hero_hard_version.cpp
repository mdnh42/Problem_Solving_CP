/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    priority_queue<ll> pq;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (pq.empty())
                continue;
            ans = ans + pq.top();
            pq.pop();
        }
        else
        {
            pq.push(a[i]);
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