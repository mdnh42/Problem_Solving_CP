/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve(ll n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;

    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    cin >> a >> b;
    cout << (solve(a - 1) ^ solve(b));
    return 0;
}
