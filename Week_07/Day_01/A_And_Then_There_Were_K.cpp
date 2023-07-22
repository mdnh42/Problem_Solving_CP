/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
void solve()
{
    int n;
    cin >> n;
    int last = 0;
    for (int i = 0; i < 30; i++)
    {
        if (((n >> i) & 1) == 1)
        {
            last = i;
        }
    }
    cout << (1 << last) - 1 << endl;
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
