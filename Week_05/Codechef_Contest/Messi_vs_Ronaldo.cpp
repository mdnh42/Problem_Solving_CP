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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int messiPoints = (a * 2) + b;
    int ronaldoPoints = (x * 2) + y;

    if (messiPoints == ronaldoPoints)
    {
        cout << "Equal" << endl;
    }
    else if (messiPoints > ronaldoPoints)
    {
        cout << "Messi" << endl;
    }
    else
    {
        cout << "Ronaldo" << endl;
    }

    return 0;
}
