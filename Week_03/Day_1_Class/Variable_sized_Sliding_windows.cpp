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

    int n, k;
    cin >> n >> k;

    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = 0;
    long long s = 0;

    int ans = 0;

    while (j < n)
    {
        s += a[j];

        if (s > k)
        {
            while (s > k)
            {
                s -= a[i];
                i++;
            }
        }
        if (s == k)
        {
            ans = max(ans, j - i + 1);
        }

        j++;
    }

    return 0;
}
