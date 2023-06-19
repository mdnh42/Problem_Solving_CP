/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    map<string, ll> m;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        string temp = s;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            if (ch != s[0])
            {
                temp[0] = ch;
                ans += m[temp];
            }
        }
        temp = s;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            if (ch != s[1])
            {
                temp[1] = ch;
                ans += m[temp];
            }
        }
        m[s]++;
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
