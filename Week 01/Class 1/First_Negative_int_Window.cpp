#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    cin >> N;

    long long int Arr[N];
    for (int i = 0; i < N; i++)
        cin >> Arr[i];

    int K;
    cin >> K;

    long long int I = 0, J = 0;
    queue<int> q;
    while (J < N)
    {
        if (Arr[J] < 0)
        {
            q.push(Arr[J]);
        }
        if (J < K - 1)
        {
            J++;
        }
        else
        {
            if (q.empty())
                cout << 0 << " ";
            else
                cout << q.front() << " ";
            if (Arr[I] < 0)
            {
                q.pop();
            }
            I++;
            J++;
        }
    }

    return 0;
}

// vector<long long>result;

//     while (J < N)
//     {
//         if (A[J] < 0)
//         {
//             q.push(A[J]);
//         }
//         if (J < K - 1)
//         {
//             J++;
//         }
//         else
//         {
//             if (q.empty())
//                 result.push_back(0);
//             else
//                 result.push_back(q.front());

//             if (A[I] < 0)
//             {
//                 q.pop();
//             }
//             I++;
//             J++;
//         }
//     }