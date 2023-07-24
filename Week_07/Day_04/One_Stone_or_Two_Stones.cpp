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
    ll x, y;
    cin >> x >> y;
    ll dif = abs(x - y);
    if (dif >= 2)
    {
        if (x > y)
            cout << "CHEF" << endl;
        else
            cout << "CHEFINA" << endl;
    }
    else
    {
        if (x == y)
        {
            if (x % 2)
                cout << "CHEF" << endl;
            else
                cout << "CHEFINA" << endl;
        }
        else
        {
            ll mn = min(x, y);
            if (mn % 2)
                cout << "CHEF" << endl;
            else
                cout << "CHEFINA" << endl;
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
