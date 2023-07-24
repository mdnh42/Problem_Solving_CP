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
    int x, y;
    cin >> x >> y;
    if (x % 2 == 0)
    {
        if (y % 2 == 0)
        {
            cout << (y - x) / 2 << endl;
        }
        else
        {

            cout << ((y - x) / 2 + 1) << endl;
        }
    }
    else if (x % 3 == 0)
    {
        int z = x + 3;
        if ((y - z) % 2 == 0)
        {
            cout << ((y - z) / 2) + 1 << endl;
        }
        else
        {
            cout << ((y - z) / 2) + 2 << endl;
        }
    }
    else
    {
        int z = x * 2;
        if ((y - z) % 2 == 0)
        {
            cout << ((y - z) / 2 + 1) << endl;
        }
        else
        {
            cout << ((y - z) / 2) + 2 << endl;
        }
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
