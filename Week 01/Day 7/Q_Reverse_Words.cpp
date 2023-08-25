/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define SIZE 26;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(), v.end()
const int MAX_SIZE = 1e5 + 10;
int freq[MAX_SIZE] = {0};
void solve()
{

    string str;
    getline(cin, str);

    string reverseSentence;
    string word;

    int start = 0;
    int end = str.find(' ');

    while (end != string::npos)
    {
        word = str.substr(start, end - start);
        reverse(word.begin(), word.end());
        reverseSentence += word + ' ';

        start = end + 1;
        end = str.find(' ', start);
    }

    word = str.substr(start);
    reverse(word.begin(), word.end());
    reverseSentence += word;

    cout << reverseSentence << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
