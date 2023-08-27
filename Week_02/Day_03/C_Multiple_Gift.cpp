/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, k;
    cin >> n >> k;
    long long int count = 0;
    while (n <= k)
    {
        n = n * 2;
        count++;
    }

    cout << count << endl;
    return 0;
}
