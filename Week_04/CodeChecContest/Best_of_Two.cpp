/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    int alice = max({a1 + a2, a1 + a3, a2 + a3});
    int bob = max({b1 + b2, b1 + b3, b2 + b3});
    if (alice > bob)

        cout << "Alice" << endl;
    else if (alice < bob)
        cout << "Bob" << endl;
    else
    {
        cout << "Tie" << endl;
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
