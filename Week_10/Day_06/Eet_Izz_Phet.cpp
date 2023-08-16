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
const int mod = 1e9 + 7;
int hashing(string s, int base)
{

    int val = 1;
    int ans = 0;
    for (char c : s)
    {
        int asci = c - 'a' + 1;
        ans += ((asci % mod) * (val % mod)) % mod;
        // Mod Formula
        //(a*b)%mod = (a%mod) * (b%mod)
        val = ((val % mod) * (base % mod)) % mod;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<pair<int, int>> st;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.insert({hashing(s, 2), hashing(s, 3)});
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        if (st.count({hashing(s, 2), hashing(s, 3)}) > 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
