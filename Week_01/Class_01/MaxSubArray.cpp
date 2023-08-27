#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    cin >> N;
    int K;
    cin >> K;
    long long int Arr[N];
    for (int i = 0; i < N; i++)
        cin >> Arr[i];

    long long int I = 0, J = 0, sum = 0;
    long long int mx = INT_MIN;
    while (J < N)
    {
        sum = sum + Arr[J];
        if (J < K - 1)
        {
            J++;
        }
        else
        {
            mx = max(mx, sum);
            sum = sum - Arr[I];
            I++;
            J++;
        }
    }

    cout << mx << endl;

    return 0;
}
