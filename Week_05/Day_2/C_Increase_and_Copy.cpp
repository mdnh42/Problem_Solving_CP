/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, s;
    cin >> n;
    int p = sqrt(n);

    n = n - p;
    if (n % p == 0)
    {
        s = n / p;
    }
    else
    {
        s = n / p + 1;
    }
    s = s + (p - 1);
    cout << s << endl;
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
