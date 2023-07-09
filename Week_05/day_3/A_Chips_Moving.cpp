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
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    int n;
    cin >> n;
    int cnto = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnto += x & 1;
    }

    cout << min(cnto, n - cnto) << endl;
    return 0;
}
