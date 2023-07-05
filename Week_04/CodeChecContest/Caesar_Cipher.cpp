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
    string s, t, r;
    cin >> s >> t >> r;
    int a = s[0] - 'a' + 1;
    int b = t[0] - 'a' + 1;

    int diff = 0;

    if (b > a)
        diff = b - a;
    if (a > b)
        diff = (26 - a) + b;

    string ans = "";

    for (int i = 0; i < n; i++)
    {
        int x = r[i] - 'a';
        int y = x + diff;
        if (y >= 26)
        {
            y = y - 26;
        }
        char s = y + 'a';
        ans += s;
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
