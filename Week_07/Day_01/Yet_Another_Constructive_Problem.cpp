/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll a = 0;
        ll c = x;
        ll b = log2(x);

        b = pow(2, b + 1) + x;

        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}
