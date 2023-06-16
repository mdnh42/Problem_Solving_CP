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

    int ans = 0;
    while (n > 0)
    {
        n = n / k;
        ans++;
    }

    cout << ans << endl;
    return 0;
}
