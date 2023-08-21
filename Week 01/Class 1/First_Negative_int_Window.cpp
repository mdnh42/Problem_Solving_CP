#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    long long int I = 0, J = 0;
    queue<int> q;
    vector<long long> result;
    while (J < N)
    {
        if (A[J] < 0)
        {
            q.push(A[J]);
        }
        if (J < K - 1)
        {
            J++;
        }
        else
        {
            if (q.empty())
                result.push_back(0);
            else
                result.push_back(q.front());
            if (A[I] < 0)
            {
                q.pop();
            }
            I++;
            J++;
        }
    }
    return result;
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
