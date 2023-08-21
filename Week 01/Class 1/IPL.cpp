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
vector<int> maxOfSubarrays(vector<int> arr, int n, int k)
{
    int I = 0, J = 0;
    int mx = INT_MIN;
    multiset<int> win;
    vector<int> result;

    while (J < n)
    {

        if (J < k - 1)
        {
            win.insert(arr[J]);
            J++;
        }
        else
        {
            win.insert(arr[J]);
            I++;
            J++;
            mx = *win.rbegin();
            result.push_back(mx);
            win.erase(win.find(arr[I - 1]));
        }
    }

    return result;
}
int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> res = maxOfSubarrays(arr, n, k);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;

    return 0;
}
