#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int alice = 0;
        int bob = 0;

        if (s[0] == 'A')
        {
            alice++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A' && s[i + 1] == 'A')
            {
                alice++;
            }

            else if (s[i] == 'B' && s[i + 1] == 'B')
            {
                bob++;
            }
        }

        cout << alice << " " << bob << endl;
    }
    return 0;
}