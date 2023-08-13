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
    int n;
    cin >> n;

    vector<vector<int>> arrays(n);
    int totalMin = INT_MAX; // Store the minimum value across all arrays
    int totalSum = 0;       // Store the sum of second smallest values across arrays

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;

        int minVal = INT_MAX;    // Store the minimum value in the current array
        int secondMin = INT_MAX; // Store the second minimum value in the current array

        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            minVal = min(minVal, x);

            if (x <= secondMin)
            {
                secondMin = x;
                swap(minVal, secondMin);
            }
        }

        totalMin = min(totalMin, minVal);
        totalSum += secondMin;
    }

    totalSum += totalMin; // Add the minimum value from all arrays

    cout << totalSum << '\n';
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
