// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

/*
    itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    for (int shotsEbony = 0; shotsEbony <= c / a; shotsEbony++)
    {
        int remainingDamage = c - shotsEbony * a;
        if (remainingDamage % b == 0)
        {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";

    return 0;
}