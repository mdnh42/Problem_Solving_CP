/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    long long n;
    cin >> n;
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    string given = "Timur";

    sort(given.begin(), given.end());

    if (given == str)
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
