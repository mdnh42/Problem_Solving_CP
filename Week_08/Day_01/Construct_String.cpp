/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define SIZE 26;
void solve()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    int c = 1;
    for (int i = 0; i < t; i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
        else
        {
            // cout<<s[i];c=0;
            if (c % 2 == 0)
            {
                cout << string(2, s[i]);
            }
            else
            {
                cout << s[i];
            }
            c = 1;
        }
    }
    cout << endl;
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
