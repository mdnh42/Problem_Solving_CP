#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt, ptr;
    cin >> txt >> ptr;

    int k = ptr.size(), i = 0, j = 0;

    int fr1[26] = {0};
    int fr2[26] = {0};

    for (char c : ptr)
    {
        fr1[-'a']++;
    }

    int ans = 0;

    while (j < txt.size())
    {
        fr2[txt[j]]
    }

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