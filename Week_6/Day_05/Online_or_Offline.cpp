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
    int on, of;
    cin >> on >> of;
    int dis = on * 10 / 100;
    int after = on - dis;
    if (after < of)
    {
        cout << "ONLINE" << endl;
    }
    else if (after > of)
    {
        cout << "DINING" << endl;
    }
    else
    {
        cout << "EITHER" << endl;
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
