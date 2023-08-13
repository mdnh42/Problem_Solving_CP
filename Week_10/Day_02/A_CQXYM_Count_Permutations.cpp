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
int f[100001];
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    f[1] = 1;
    for (register int i = 2; i != 100001; i++)
    {
        f[i] = ((i << 1) - 1ll) * f[i - 1] % 1000000007 * (i << 1) % 1000000007;
    }
    int n;
    scanf("%d", &n);
    for (register int i = n; i != 0; i--)
    {
        scanf("%d", &n);
        printf("%d\n", f[n]);
    }
    return 0;
}
