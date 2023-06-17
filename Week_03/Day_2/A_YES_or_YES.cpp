/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    string s;
    cin >> s;

    for (char &c : s)
    {
        c = tolower(c);
    }

    if (s == "yes")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
