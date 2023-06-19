/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((b > a && d > c && c > a && d > b) ||
        (a > c && b > d && d > c && b > a) ||
        (c > d && a > b & b > d && a > c) ||
        (d > b && c > a && a > b && c > d))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
