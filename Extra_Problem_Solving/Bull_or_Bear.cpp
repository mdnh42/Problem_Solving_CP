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
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "NEUTRAL" << endl;
    }
    else if (a < b)
    {
        cout << "PROFIT" << endl;
    }
    else
    {
        cout << "LOSS" << endl;
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
