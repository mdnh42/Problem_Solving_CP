/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define SIZE 26;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(), v.end()
const int MAX_SIZE = 1e5 + 10;
int freq[MAX_SIZE] = {0};

int n;
const int N = 3000 + 5;
int d1[N][N];
int d2[N][N];
int d3[N][N];
void solve()
{
    vector<int> cur(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            d1[i][j] = 0;
            d2[i][j] = 0;
            cur[i][j] = 0;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cur[i][j] = d1[i][j] + d2[i][j] + (j - 1 > 0 ? cur[i][j - 1] : 0);
        }
        for (int j = 0; j < n; j++)
        {
            char eta = s[i][j];
            if (cur[i][j] % 2)
            {
                eta = ((eta - '0') ^ 1) + '0';
            }
            if (eta == '1')
            {
                ans++;
                d1[i][j]++;
                if (j + 1 < n)
                {
                    d2[i][j + 1]--;
                }
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (i + 1 >= n)
            {
                break;
            }
            if (j - 1 >= 0)
            {
                d1[i + 1][j - 1] += d1[i][j];
            }
            else
            {
                d1[i + 1][j] += d1[i][j];
            }

            if (j + 1 < n)
            {
            }
        }
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
