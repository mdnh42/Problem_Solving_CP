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
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i].first = x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i].second = x;
    }

    int happy = 0;
    for (int i = 0; i < n; i++)
    {
        int x = min(a[i].first, a[i].second);
        int y = max(a[i].first, a[i].second);

        if (x * 2 >= y)
        {
            happy++;
        }
    }
    cout << happy << endl;
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
