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
    string s;
    cin >> s;
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            x--;
        }
        if (s[i] == 'R')
        {
            x++;
        }
        if (s[i] == 'D')
        {
            y--;
        }
        if (s[i] == 'U')
        {
            y++;
        }
        if (x == 1 && y == 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
