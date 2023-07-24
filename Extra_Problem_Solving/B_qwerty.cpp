/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
char convert(int n)
{
    char ch = 'a' + n - 1;
    return ch;
}
void solve()
{

    for (int i = 0; i < 26; i++)
    {
        int n;
        cin >> n;
        char ch = convert(n);
        cout << ch;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}
