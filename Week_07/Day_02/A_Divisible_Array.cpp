/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const int N = 2e6 + 1;
const ll mod = 998244353;
ll n, m;
ll a[N], b[N];
void solve()
{
    cin >> n;
    ll s = 0;
    for (int i = n; i >= 2; i--)
    {
        a[i] = i;
        s = (s + i) % n;
    }
    a[1] = n - s;
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    cout << '\n';
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
