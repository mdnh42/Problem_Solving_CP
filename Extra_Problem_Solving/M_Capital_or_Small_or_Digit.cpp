/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    char c;
    cin >> c;
    int n = c;
    if (n < 58)
    {
        cout << "IS DIGIT" << endl;
    }
    else if (n >= 65 && n <= 96)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    return 0;
}
