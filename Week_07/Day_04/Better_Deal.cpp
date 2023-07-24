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
    int A, B;
    cin >> A >> B;
    int StoreA = 100 - A;
    int StoreB = 200 - B * 2;
    if (StoreA == StoreB)
    {
        cout << "BOTH" << endl;
    }
    else if (StoreA > StoreB)
    {
        cout << "SECOND" << endl;
    }
    else
    {
        cout << "FIRST" << endl;
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
