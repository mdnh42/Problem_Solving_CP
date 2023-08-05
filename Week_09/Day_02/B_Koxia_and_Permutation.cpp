/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define SIZE 26;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(), v.end()
void solve()
{

    int n, m;
    cin >> n >> m;
    vector<long long> a(n + m);
    forn(i, n + m) scanf("%lld", &a[i]);

    sort(a.begin(), a.end() - 1);
    reverse(a.begin(), a.end());

    long long ans = 0;
    forn(i, n) ans += a[i];

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
