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
    int n, m, type, l, r;

    cin >> n;

    vector<ll> arr(n);
    vector<ll> sum(n + 1, 0);
    vector<ll> sum2(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i - 1];
        sum[i] = sum[i - 1] + arr[i - 1];
    }

    sort(arr.begin(), arr.end());

    for (int i = n; i >= 1; i--)
    {
        sum2[i] = sum2[i + 1] + arr[i - 1];
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> type >> l >> r;
        cout << (type == 1 ? sum[r] - sum[l - 1] : sum2[l] - sum2[r + 1]) << endl;
    }

    return 0;
}
