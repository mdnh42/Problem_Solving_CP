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
bool solve(int n)
{
    string s = to_string(n);

    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
void print_reverse(int n)
{
    int reverse_n = 0;
    int temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        reverse_n = reverse_n * 10 + digit;
        temp /= 10;
    }
    cout << reverse_n << endl;

    if (reverse_n == 0)
        cout << "NO" << endl;
    else if (solve(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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

    print_reverse(n);

    return 0;
}
