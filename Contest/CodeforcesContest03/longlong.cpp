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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                sum += (v[i] * -1);
            }
            else
            {
                sum += v[i];
            }
        }

        ll operation = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                operation++;
                while (v[i] <= 0)
                {
                    i++;
                }
            }
        }
        cout << sum << " " << operation << endl;
    }
    return 0;
}
