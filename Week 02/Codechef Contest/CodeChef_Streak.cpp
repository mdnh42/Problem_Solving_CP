/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
        vector<int> Addy(n);
        for (int i = 0; i < n; i++)
        {
            cin >> Addy[i];
        }

        vector<int> Om(n);
        for (int i = 0; i < n; i++)
        {
            cin >> Om[i];
        }

        int max_om_streak = 0;
        int max_addy_streak = 0;
        int om_streak = 0;
        int addy_streak = 0;

        for (int i = 0; i < n; i++)
        {
            if (Addy[i] > 0)
            {
                om_streak++;
                max_om_streak = max(max_om_streak, om_streak);
            }
            else
            {
                om_streak = 0;
            }

            if (Om[i] > 0)
            {
                addy_streak++;
                max_addy_streak = max(max_addy_streak, addy_streak);
            }
            else
            {
                addy_streak = 0;
            }
        }

        if (max_om_streak > max_addy_streak)
        {
            cout << "OM" << endl;
        }
        else if (max_addy_streak > max_om_streak)
        {
            cout << "ADDY" << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
    }
    return 0;
}
