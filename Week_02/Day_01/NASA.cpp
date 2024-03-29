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
vector<ll> v;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll fre[35000] = {0};
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < v.size(); j++)
        {
            ll k = a[i] ^ v[j];
            if (k > (1 << 15))
            {
                continue;
            }
            ll x = freq[k];
            ans += freq[k];
        }
    }
    cout << (ans + n) / 2 << endl;
}

bool isPalindrome(ll val)
{
    string ans = to_string(val);
    string ans2 = ans;
    reverse(ans2.begin(), ans2.end());
    return ans == ans2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (ll i = 0; i < (1 << 15); i++)
        if (isPalindrome(i))
        {
            v.push_back(i);
        }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
