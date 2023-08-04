#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<int, long long> prefix;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        prefix[l]++;
        prefix[r + 1]--;
    }
    long long sum = 0, ans = 0;
    for (auto [idx, value] : prefix)
    {
        sum += value;
        ans = max(ans, sum);
    }
    cout << ans << '\n';
    return 0;
}
