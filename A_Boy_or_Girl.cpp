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
    string str;
    cin >> str;
    unordered_set<char> distinctCharacters;
    for (char ch : str)
    {
        distinctCharacters.insert(ch);
    }
    int n = str.size();
    int m = distinctCharacters.size();
    if (n >= m)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
    cout << endl;
    return 0;
}
