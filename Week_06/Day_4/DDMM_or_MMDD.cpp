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
    char ch;
    cin >> a >> ch >> b >> ch >> c;
    if (a <= 12 and b <= 12)
        cout << "BOTH" << endl;
    else if (a > 12 and b <= 12)
        cout << "DD/MM/YYYY" << endl;
    else if (a <= 12 and b > 12)
        cout << "MM/DD/YYYY" << endl;
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
