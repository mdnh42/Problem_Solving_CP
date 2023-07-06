/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    string s;
    cin >> s;
    string w = "aa";
    map<string, int> idx;
    int i = 1;
    for (w[0] = 'a'; w[0] <= 'z'; w[0]++)
        for (w[1] = 'a'; w[1] <= 'z'; w[1]++)
            if (w[0] != w[1])
                idx[w] = i++;

    cout << idx[s] << endl;
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
