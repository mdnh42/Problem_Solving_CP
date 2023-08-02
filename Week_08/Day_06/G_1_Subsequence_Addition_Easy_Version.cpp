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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(all(a));
    if (a[0] != 1)
    {
        cout << "NO\n";
        return;
    }
    vector<int> dp(5005, 0);
    dp[1] = 1;
    for (int i = 1; i < n; ++i)
    {
        if (!dp[a[i]])
        {
            cout << "NO\n";
            return;
        }
        for (int j = 5000; j >= a[i]; --j)
        {
            dp[j] |= dp[j - a[i]];
        }
    }
    cout << "YES\n";
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
