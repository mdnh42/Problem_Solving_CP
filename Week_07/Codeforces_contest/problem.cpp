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
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b >= 10 || a + c >= 10 || b + c >= 10)
    {
        yes;
    }
    else
        no;
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
