/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    char ch;
    cin >> ch;
    string s;
    cin >> s;
    s += s;

    int maxi = 0, cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ch)
        {
            cnt = 0;
            while (s[i] != 'g' && i < s.size())
            {
                cnt++;
                i++;
            }
            if (cnt > maxi)
                maxi = cnt;
        }
    }
    cout << maxi << endl;
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
