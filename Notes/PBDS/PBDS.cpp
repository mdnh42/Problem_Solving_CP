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
    pbds<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(9);
    s.insert(2);
    s.insert(7);
    s.insert(1);
    s.insert(7);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << *s.find_by_order(4) << endl;
    return 0;
}
