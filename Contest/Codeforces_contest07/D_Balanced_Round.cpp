#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = 1;
    int curCon = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] <= k)
        {
            curCon++;
            ans = max(ans, curCon);
        }
        else
        {
            curCon = 1;
        }
    }

    cout << n - ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
