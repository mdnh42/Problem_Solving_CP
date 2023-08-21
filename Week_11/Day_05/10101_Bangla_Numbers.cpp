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
void solve(ll n)
{
    if (n >= 10000000)
    {
        cout << " kuti";
        n % 10000000;
    }
    if (n >= 100000)
    {
        solve(n / 100000);
        printf(" lakh");
        n %= 100000;
    }
    if (n >= 1000)
    {
        solve(n / 1000);
        printf(" hajar");
        n %= 1000;
    }
    if (n >= 100)
    {
        solve(n / 100);
        printf(" shata");
        n %= 100;
    }
    if (n)
        printf(" %d", n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Case = 1;
    ll n;
    while (cin >> n)
    {
        cout << Case++;
        if (n == 0)
            cout << 0;
        solve(n);
        cout << endl;
    }
    return 0;
}
