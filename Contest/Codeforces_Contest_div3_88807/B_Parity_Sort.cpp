/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

bool canSort(vector<int> &a)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    if (even == 0 || odd == 0)
    {
        return true;
    }

    for (int i = 0; i < a.size() - 1; i++)
    {
        if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) ||
            (a[i] % 2 == 1 && a[i + 1] % 2 == 1))
        {
            return true;
        }
    }

    return false;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }

    if (canSort(a))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
