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
    int r, w, c;
    int r2, w2, c2;
    cin >> r >> w >> c;
    cin >> r2 >> w2 >> c2;

    cout << (r > r2 && w > w2 && c > c2 ? "A" : "B") << endl;
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
