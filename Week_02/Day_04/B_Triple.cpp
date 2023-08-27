/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int answer = -1;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            mp[k]++;

            if (mp[k] >= 3)
            {
                answer = k;
            }
        }

        cout << answer << endl;
    }
    return 0;
}
