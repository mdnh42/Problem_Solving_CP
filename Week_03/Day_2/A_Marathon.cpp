#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int count = 0;

    int rs = (b > a) + (c > a) + (d > a);
    cout << rs << endl;
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
