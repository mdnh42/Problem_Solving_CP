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
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> res;
    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        int pos = -1;
        for (int j = 0; j < n; ++j)
        {
            if (pos == -1 || a[j] > a[pos])
                pos = j;
        }
        res.push_back(pos + 1);
        ans += i * a[pos] + 1;
        a[pos] = 0;
    }

    cout << ans << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
