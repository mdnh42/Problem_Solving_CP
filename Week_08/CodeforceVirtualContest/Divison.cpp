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
    if (n >= 1900)
    {
        cout << "Division 1" << endl;
    }
    else if (n >= 1600 && n <= 1899)
    {
        cout << "Division 2" << endl;
    }
    else if (n >= 1400 && n <= 1599)

        cout << "Division 3" << endl;

    else
    {
        cout << "Division 4" << endl;
    }
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
