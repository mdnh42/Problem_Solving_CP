/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    double a;
    ll b;
    cin >> a >> b;
    cout << "floor " << a << " / " << b << " = " << floor(a / b) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(a / b) << endl;
    cout << "round " << a << " / " << b << " = " << round(a / b) << endl;

    return 0;
}
