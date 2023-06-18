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
    vector<string> v(n);
    map<string, bool> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]] = true;
    }

    for (int j = 0; j < n; j++)
    {
        bool flag = false;
        for (int i = 1; i < v[j].size(); i++)
        {
            string s1 = v[j].substr(0, i);
            string s2 = v[j].substr(i, v[j].size() - 1);

            if (m[s1] && m[s2])
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? 1 : 0);
    }
    cout << endl;
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
