/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int N, M;
    cin >> N >> M;
    if (M % 2 == 0)
    {
        cout << (M + 2) / 2 << endl;
    }
    else
    {
        cout << (M + 1) / 2 << endl;
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
