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
    int rows = 8;
    int cols = 8;

    vector<string> v;

    for (int i = 0; i < rows; ++i)
    {
        string row;
        cin >> row;
        v.push_back(row);
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (v[i][j] != '.')
            {
                int k = j;
                while (k < cols && v[i][k] != '.')
                {
                    k++;
                }

                for (int l = j; l < k; ++l)
                {
                    cout << v[i][l];
                }
                j = k - 1;
            }
        }
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
