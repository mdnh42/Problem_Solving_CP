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
bool solve(int i)
{
    string str = to_string(i);

    for (auto c : str)
    {
        if (c != '4' && c != '7')
        {
            return false;
        }
    }

    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;

    int luckyNumber = false;
    for (int i = a; i < b; i++)
    {
        if (solve(i))
        {
            cout << i << " ";
            luckyNumber = true;
        }
    }

    if (!luckyNumber)
    {
        cout << -1 << endl;
    }
    return 0;
}
