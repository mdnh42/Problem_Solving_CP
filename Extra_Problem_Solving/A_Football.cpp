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
    string s;
    cin >> s;

    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int cnt = 0;
        if (s[i] == '0')
        {
            while (s[i] == '0' && i < s.size())
            {
                cnt++;
                i++;
            }
        }
        else
        {
            while (s[i] == '1' && i < s.size())
            {
                cnt++;
                i++;
            }
        }
        if (cnt >= 7)
        {
            ans = 1;
        }
        i--;
    }
    if (ans == 1)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}