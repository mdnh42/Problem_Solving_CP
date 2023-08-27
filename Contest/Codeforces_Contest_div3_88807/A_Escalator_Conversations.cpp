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
    int n, m, k, H;
    cin >> n >> m >> k >> H;
    vi heights(n);
    cinv(heights);

    int h_diff;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        h_diff = abs(heights[i] - H);
        if (h_diff != 0 && h_diff % k == 0 && h_diff / k < m)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
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
