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
    int n, a, b;
    cin >> n >> a >> b;
    if (n % 2 == 0)
        cout << (n / 2) * a + (n / 2) * b << endl;

    else
        cout << (n / 2) * a + (n / 2) * b + b << endl;
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
