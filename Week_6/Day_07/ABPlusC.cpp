#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << -1 << endl;
        else
        {
            if (n <= 1000000)
            {
                cout << 1 << " " << 1 << " " << n - 1 << endl;
            }
            else if (n % 1000000 == 0)
            {
                cout << (n / 1000000) - 1 << " " << 1000000 << " " << 1000000 << endl;
            }
            else
            {
                cout << (n / 1000000) << " " << 1000000 << " " << n % 1000000 << endl;
            }
        }
    }

    return 0;
}