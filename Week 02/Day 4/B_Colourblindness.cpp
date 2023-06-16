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
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < n; i++)
    {
        if ((s1[i] == 'R' && s2[i] != 'R') || (s1[i] != 'R' && s2[i] == 'R'))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
