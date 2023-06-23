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
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), [](char c)
              { return tolower(c); });

    s.erase(unique(s.begin(), s.end()), s.end());

    cout << (s == "meow" ? "YES" : "NO") << endl;
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
