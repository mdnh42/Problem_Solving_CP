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
    cin >> t;
    while (t--)
    {
        string PI = "314159265358979323846264338327";
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (PI[i] == s[i])
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
