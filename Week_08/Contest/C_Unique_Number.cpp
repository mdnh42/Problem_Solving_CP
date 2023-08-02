/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define SIZE 26;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(), v.end()
void solve()
{
    int x;
    cin >> x;
    vector<int> ans;
    int sum = 0;
    int last = 9;
    while (sum < x && last > 0)
    {
        ans.push_back(min(x - sum, last));
        sum += last;
        last--;
    }
    if (sum < x)
    {
        cout << -1 << endl;
    }
    else
    {
        reverse(ans.begin(), ans.end());
        for (int i : ans)
        {
            cout << i;
        }
        cout << endl;
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
