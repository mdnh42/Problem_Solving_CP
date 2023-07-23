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
    vector<int> a(x);
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << a[x - y] - 1 << endl;
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
