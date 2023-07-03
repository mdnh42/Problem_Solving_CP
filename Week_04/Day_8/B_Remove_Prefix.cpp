/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool yes = false;
    set<int> c;
    for (int i = n - 1; i >= 0; i--)
    {
        if (c.count(a[i]))
        {
            cout << i + 1 << endl;
            yes = true;
            break;
        }
        c.insert(a[i]);
    }
    if (!yes)
    {
        cout << 0 << endl;
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
