/*
ITZMRNH
*/
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<string> cnt;

    for (int i = 1; i < n; i++)
    {
        cnt.insert(s.substr(i - 1, 2));
    }

    cout << cnt.size() << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}