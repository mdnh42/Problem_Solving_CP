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
    int time, h, m;
    cin >> h >> m;
    time = 60 * h + m;
    int ans = 24 * 60;
    for (int i = 0; i < n; ++i)
    {
        cin >> h >> m;
        int t = 60 * h + m - time;
        if (t < 0)
            t += 24 * 60;
        ans = min(ans, t);
    }
    cout << ans / 60 << " " << ans % 60;
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
        cout << endl;
    }
    return 0;
}
