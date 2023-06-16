// https://codeforces.com/contest/1840/problem/0

/*
    itzmrnh
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<string> deMessage;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string ans;

        int i = 0, j = 1;

        while (j < n)
        {
            char x = s[i];
            if (x == s[j])
            {
                ans.push_back(s[i]);
                i = j + 1;
                j += 2;
            }
            else
            {
                j++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
