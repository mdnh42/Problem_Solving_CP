/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int k, s;
    cin >> k >> s;
    int count = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int a = s - i - j;
            if (a >= 0 and a <= k)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    // while (t--)
    // {

    // }
    solve();
    return 0;
}
