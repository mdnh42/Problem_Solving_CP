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
    int x, y, z;
    cin >> x >> y >> z;

    int s = z / 30;
    int a = x + s;
    int ans = 0;
    if (a % y != 0)
    {
        ans = a / y + 1;
    }
    else
    {
        ans = a / y;
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
