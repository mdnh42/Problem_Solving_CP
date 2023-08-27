/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
void solve()
{
    long long n, m;
    cin >> n >> m;
    n = n / m;
    vector<int> digits(10);
    for (int i = 0; i <= 10; i++)
        digits[i] = ((i + 1) * m) % 10;
    long long sum = 0;
    for (int i = 0; i < n % 10; i++)
        sum += digits[i];
    cout << sum + n / 10 * accumulate(digits.begin(), digits.end(), 0LL) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
