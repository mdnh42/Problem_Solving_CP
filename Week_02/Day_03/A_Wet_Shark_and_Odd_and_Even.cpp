/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;
    vector<long long int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    if (sum % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        long long int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                mn = min(mn, arr[i]);
            }
        }

        cout << sum - mn << endl;
    }
    return 0;
}
