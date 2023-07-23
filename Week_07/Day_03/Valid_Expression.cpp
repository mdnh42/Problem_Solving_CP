/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
void solve()
{
    ll n, x;
    cin >> n >> x;
    ll ans = 1;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        if (ans == x)
            s += '*';
        else if (ans > x)
        {
            s += '-';
            ans--;
        }
        else
        {
            s += '+';
            ans++;
        }
    }
    if (ans == x)
        cout << s << endl;
    else
        cout << -1 << endl;
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
