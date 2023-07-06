/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int x, y;
    cin >> x >> y;

    if (y % x == 0)
    {
        cout << "1 " << y / x;
    }
    else
    {
        cout << "0 0";
    }
    cout << endl;
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
