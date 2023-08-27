#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int countGoodRemovals(const vector<int> &A)
{
    int N = A.size();
    vector<vector<int>> dp(N, vector<int>(N));

    for (int j = 0; j < N; j++)
    {
        if (A[j] % 2 == 0)
        {
            dp[0][j] = 1;
        }
    }

    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += A[k];
            }
            if (sum % 2 == 0)
            {
                for (int k = i - 1; k < j; k++)
                {
                    dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
                }
            }
        }
    }

    int result = 0;
    for (int j = 0; j < N; j++)
    {
        result = (result + dp[N - 1][j]) % MOD;
    }

    return result;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int goodRemovals = countGoodRemovals(A);
        cout << goodRemovals << endl;
    }

    return 0;
}
