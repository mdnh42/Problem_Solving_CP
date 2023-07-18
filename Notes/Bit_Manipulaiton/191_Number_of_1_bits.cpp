// https://leetcode.com/problems/number-of-1-bits/

/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int cnt = 0;
    while (n != 0)
    {
        if ((n & 1) != 0)
        {
            cnt++;
        }
        n = (n >> 1);
    }
    cout << cnt << endl;

    return 0;
}
