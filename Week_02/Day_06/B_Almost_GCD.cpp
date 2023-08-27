/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int n, vector<int> &arr)
{
    vector<int> v(1001, 0);

    for (int i = 2; i <= 1000; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % i == 0)
            {
                v[i]++;
            }
        }
    }

    int gcd = 0;
    int ans = 0;

    for (int i = 2; i <= 1000; i++)
    {
        if (v[i] >= gcd)
        {
            gcd = v[i];
            ans = i;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = gcd(n, arr);

    cout << result << endl;

    return 0;
}
