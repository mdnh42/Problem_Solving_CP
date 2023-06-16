/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;

    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        int primeFactors = 0;
        for (int j = 2; j <= i; j++)
        {
            if (isPrime(j) && i % j == 0)
            {
                primeFactors++;
            }
        }
        if (isPrime(primeFactors))
        {
            count++;
        }
    }

    cout << count << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}
