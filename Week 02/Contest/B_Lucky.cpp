/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x;
        cin >> x;
        long long int first = x / 1000;
        long long int last = x % 1000;

        long long int sumFirst = first / 100 + (first / 10) % 10 + first % 10;
        long long int sumLast = last / 100 + (last / 10) % 10 + last % 10;

        if (sumFirst == sumLast)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
