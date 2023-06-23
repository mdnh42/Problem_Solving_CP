/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    s += accumulate(a.begin(), a.end(), 0);
    int sm = 0;
    int cnt = 0;
    for (int i = 1; i <= s; i++)
    {
        if (sm >= s)
        {
            break;
        }
        sm += i;
        cnt = i;
    }
    if (sm != s || *max_element(a.begin(), a.end()) > cnt || cnt <= n)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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
