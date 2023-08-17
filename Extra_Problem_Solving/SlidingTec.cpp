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
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;
    int mx = INT_MIN;
    int i = 0,
        j = 0;
    int sum = 0;

    while (j < n)
    {

        sum += a[j];
        if (j < k - 1)
        {

            j++;
        }
        else
        {
            mx = max(mx, sum);
            sum -= a[i];
            i++;
            j++;
        }
    }
    cout << mx << endl;

    return 0;
}
/*
6
1 2 5 3 4 2
3

  */