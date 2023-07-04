/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int s;
    cin >> s;

    string result;
    for (int i = 9; i >= 1; i--)
    {
        if (s >= i)
        {
            result = char('0' + i) + result;
            s = s - i;
        }
    }
    cout << result << endl;
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