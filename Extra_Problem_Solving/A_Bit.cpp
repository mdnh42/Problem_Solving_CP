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
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        if (str == "++X" || str == "X++")
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    cout << x << endl;
    return 0;
}
