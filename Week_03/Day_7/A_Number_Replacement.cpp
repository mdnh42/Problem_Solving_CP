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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;

    map<int, char> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.count(a[i]) && mp[a[i]] != s[i])
        {
            cout << "NO" << endl;
            return;
        }
        else if (mp.count(a[i]) == 0)
        {
            mp[a[i]] = s[i];
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
