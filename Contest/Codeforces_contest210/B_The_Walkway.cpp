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
void solve()
{
    int n, m, d;
    cin >> n >> m >> d; // Read n, m, and d for the current test case

    vector<int> sellers(m);
    for (int i = 0; i < m; i++)
    {
        cin >> sellers[i]; // Read the locations of the cookie sellers
    }

    // Initialize variables to store results
    int minCookies = n; // Initialize with maximum possible value
    int numMinSellers = 0;

    // Calculate minimum number of cookies eaten for each possible removed seller
    for (int i = 0; i < m; i++)
    {
        int cookies = sellers[i] - 1;
        cookies += ((n - sellers[i]) + d - 1) / d;

        if (cookies < minCookies)
        {
            minCookies = cookies;
            numMinSellers = 1;
        }
        else if (cookies == minCookies)
        {
            numMinSellers++;
        }
    }

    cout << minCookies << " " << numMinSellers << endl;
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
