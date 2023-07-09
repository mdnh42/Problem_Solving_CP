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
    int a, b;
    cin >> a >> b;
    if ((b % a) == 0 || (a % b) == 0)
    {
        cout << "Multiples" << endl;
    }

    else
    {
        cout << "No Multiples" << endl;
    }
    return 0;
}
