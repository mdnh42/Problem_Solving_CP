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
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << "3 1 4 5" << endl;
    }

    else if (n == 1)
    {
        cout << "4 1 2 3" << endl;
    }
    else if (n == 2)
    {
        cout << "4 2 3 1" << endl;
    }
    else if (n == 3)
    {
        cout << "4 3 1 2" << endl;
    }
    else if (n == 4)
    {
        cout << "8 2 7 3" << endl;
    }
    else
    {
        ll a = 1, b = 2, c = 3;
        ll d = n ^ (a & b | c);
        cout << a << " " << b << " " << c << " " << d << endl;
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
