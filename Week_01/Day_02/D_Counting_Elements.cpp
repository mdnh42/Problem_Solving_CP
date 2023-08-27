// /*
// itzmrnh
// */

// #include <bits/stdc++.h>
// using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// #define ll long long int
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define SIZE 26;
// #define forn(i, n) for (int i = 0; i < int(n); i++)
// #define sz(v) (int)v.size()
// #define all(v) v.begin(), v.end()
// void solve()
// {
//     int n;
//     cin >> n;
//     map<int, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         mp[x]++;
//     }
//     int count = 0;
//     for(int i = 0; i<n; i++)
//     {
//         if(mp.count())
//     }
//     for (auto it : mp)
//     {
//         cout << it.first << " " << it.second << endl;
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t = 1;
//     // cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_set<int> elements;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (elements.count(x + 1) > 0 || elements.count(x - 1) > 0)
        {
            count++;
        }

        elements.insert(x);
    }

    cout << count << endl;

    return 0;
}
