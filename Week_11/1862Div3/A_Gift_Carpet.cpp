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
//     int n, m;
//     cin >> n >> m;
//     vector<string> freqMap{26};

//     for (int i = 0; i < n; i++)
//     {
//         string str;
//         cin >> str;
//         freqMap.push_back(str);
//     }
//     int ans = 0;
//     string answer = "vika";
//     for (int i = 0; i < freqMap.size(); i++)
//     {
//         if (freqMap[i] == answer)
//         {
//             ans++;
//         }
//     }

//     if (ans)
//     {
//         yes;
//     }
//     else
//     {
//         no;
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        map<string, bool> stringMap;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            stringMap[s] = true;
        }

        string ans = "vika";
        string substring = "";

        for (int i = 0; i < stringMap.size(); i++)
        {
            substring += ans[i];
            if (stringMap.find(substring) != stringMap.end())
            {
                cout << "YES" << endl;
                return 0;
            }
        }

        cout << "NO" << endl;
        return 0;
    }
}
