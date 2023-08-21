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
void Space(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " ";
    }
}

void astericks(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
}

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        Space(n - i);
        astericks(2 * i - 1);
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        Space(n - i);
        astericks(2 * i - 1);
        cout << endl;
    }
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    pattern(n);

    return 0;
}