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
    int x;
    cin >> x;
    if (x % 10 == 0)
        cout << 100 - x << endl;
    else
    {
        int b = (x + 5) / 10 * 10;
        cout << 100 - b << endl;
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
