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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;

    for (int i = 0; i < n; i += 2)
    {
        if (!((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a')))
        {
            if (s[i] == 'a')
                s[i] = 'b';
            else
                s[i] = 'a';

            ++ans;
        }
    }

    cout << ans << endl;
    cout << s << endl;
    return 0;
}
