#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int k;
    cin >> k;
    int i = 0, j = 0;
    int mx = INT_MIN;
    int sum = 0;

    while (j < n)
    {

        if (j < k)
        {
            sum += a[j];
            j++;
        }
        else
        {

            mx = max(mx, sum);
            sum -= a[i];
            i++;
            sum += a[j];
            j++;
        }
    }
    cout << mx << endl;

    return 0;
}