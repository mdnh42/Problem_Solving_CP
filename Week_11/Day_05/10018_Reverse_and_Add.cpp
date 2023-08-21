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

ll reverse_digit(ll n)
{
    ll rev_num = 0;
    while (n > 0)
    {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }
    return rev_num;
}

bool isPalindrome(ll n)
{
    return (reverse_digit(n) == n);
}

void solve()
{
    ll n;
    cin >> n;
    int rev_num = 0;
    int cnt = 0;
    while (n <= 4294967295)
    {
        rev_num = reverse_digit(n);
        cnt++;

        n = n + rev_num;

        if (isPalindrome(n))
        {
            cout << cnt << " ";
            cout << n << endl;
            break;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
