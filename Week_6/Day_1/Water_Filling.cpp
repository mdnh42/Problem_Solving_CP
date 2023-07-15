/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int b1, b2, b3;
    cin >> b1 >> b2 >> b3;
    int sum = b1 + b2 + b3;
    if (sum <= 1)
    {
        cout << "Water filling time" << endl;
    }
    else
    {
        cout << "Not now" << endl;
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
