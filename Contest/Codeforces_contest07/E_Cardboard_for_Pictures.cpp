#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#define js                       \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
using namespace std;
const int N = 2e5 + 10;
typedef long long ll;
const ll INF = 2e18;

ll t, n;
ll c;
ll s[N];

ll sum(int w)
{
    ll m = 0;
    for (int i = 1; i <= n; i++)
    {
        ll cl = s[i] + 2 * w;
        m = min(INF, m + (cl * cl));
    }
    return m;
}

int main()
{
    js;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        for (int i = 1; i <= n; i++)
            cin >> s[i];
        ll l = 0, r = 1e9;
        while (l < r)
        {
            ll mid = (l + r + 1) >> 1;
            if (sum(mid) <= c)
                l = mid;
            else
                r = mid - 1;
        }
        cout << l << endl;
    }
    return 0;
}
