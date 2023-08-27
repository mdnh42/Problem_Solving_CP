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
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> charMap;
        int n;
        cin >> n;
        char key;

        for (int i = 0; i < n; i++)
        {
            cin >> key;
            if (charMap.find(key) != charMap.end())
            {
                charMap[key]++;
            }
            else
            {
                charMap[key] = 2;
            }
        }

        map<char, int>::iterator it = charMap.begin();
        int sum = 0;
        while (it != charMap.end())
        {
            if (it->second >= 2)
            {
                sum += it->second;
            }
            ++it;
        }
        cout << sum << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
