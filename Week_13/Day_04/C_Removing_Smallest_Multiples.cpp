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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        st = "@" + st;

        vector<int> visited(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            if (st[i] == '1')
            {
                visited[i] = 2;
            }
        }

        ll ans = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (visited[j] == 0)
                {
                    visited[j] = 1;
                    ans += i;
                }
                else if (visited[j] == 2)
                {
                    break;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
