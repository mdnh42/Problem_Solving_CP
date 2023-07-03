/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
char get(int i)
{
    return 'a' + i - 1;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = n - 1;

    string result;
    while (i >= 0)
    {
        if (s[i] != '0')
        {
            result += get(s[i] - '0');
            i--;
        }
        else
        {
            result += get(stoi(s.substr(i - 2, 2)));
            i -= 3;
        }
    }

    reverse(result.begin(), result.end());
    cout << result << endl;
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
