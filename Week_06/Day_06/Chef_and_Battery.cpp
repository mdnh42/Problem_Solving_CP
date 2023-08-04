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
    int x;
    cin >> x;
    int result = 0;
    while (x != 50)
    {
        if (x > 50)
        {
            x -= 3;
            result++;
        }
        else
        {
            x += 2;
            result++;
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
