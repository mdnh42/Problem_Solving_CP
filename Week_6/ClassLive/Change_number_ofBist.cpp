/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int dif = a ^ b;
    int cnt = 0;
    while (dif)
    {
        if (dif & 1)
            cnt++;
        dif = dif >> 1l;
    }
    cout << cnt << endl;
    return 0;
}
