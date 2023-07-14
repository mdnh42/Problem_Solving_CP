/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int cnt = 0;
    while (n)
    {
        if ((n & 1) == 1)
            cnt++;
        n = n >> 1;
    }
    cout << cnt << endl;
    return 0;
}
