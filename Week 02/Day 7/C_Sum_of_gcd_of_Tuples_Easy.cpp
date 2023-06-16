/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int Solve(int a, int b)
{
    if (!a)
    {
        return b;
    }

    return Solve(b % a, a);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x = Solve(i, j);
            for (int k = 1; k <= n; k++)
            {
                ans = ans + Solve(x, k);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
