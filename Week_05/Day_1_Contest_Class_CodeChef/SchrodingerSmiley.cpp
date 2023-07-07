/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string temp = "";
    vector<string> arr;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ':' && flag == 0)
        {
            flag = 1;
            continue;
        }

        if (flag == 0)
            continue;

        if (flag == 1 && s[i] == ':')
        {
            if (temp != "")
            {
                arr.push_back(temp);
            }
            temp = "";
            continue;
        }
        temp += s[i];
    }

    int res = 0;
    for (auto i : arr)
    {
        int flag = 1;
        for (auto j : i)
        {
            if (j != ')')
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            res++;
        }
    }
    cout << res << endl;
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
