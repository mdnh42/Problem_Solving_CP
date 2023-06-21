#include <bits/stdc++.h>

using namespace std;

const int MAXN = 55;

int n, s1, s2;
vector<int> res;

void solve()
{
    res.clear();
    int d = s1 - s2;
    for (; s2 >= d; s2 -= d)
        res.push_back(d);
    if (s2)
        res.push_back(s2);
    for (int i = 0; i < res.size() && res.size() + 1 < n;)
    {
        if (res[i] == 1)
        {
            ++i;
            continue;
        }
        --res[i];
        res.push_back(1);
    }
    res.push_back(d);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s1 >> s2;
        solve();
        sort(res.begin(), res.end());
        for (int x : res)
            cout << x << ' ';
        cout << endl;
    }
}