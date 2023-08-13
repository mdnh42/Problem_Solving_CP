/*
itzmrnh
*/

/*
Binary Search Variation 1

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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> x;
    ll l = 0, r = n - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
        {
            ans = mid;
            r = mid - 1;
        }
        else if (x < a[mid])
        {
            r = mid = 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
