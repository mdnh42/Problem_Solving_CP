// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    cin >> N;
    int K;
    cin >> K;
    vector<long long int> Arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }

    long long int I = 0, J = 0;
    vector<int> ans;
    vector<int> temp;
    while (I < N)
    {
        temp.push_back(Arr[I]);

        if (J < K - 1 && I != N - 1)
        {

            J++;
            I++;
        }
        else
        {
            int mx = *min_element(temp.begin(), temp.end());
            ans.push_back(mx);
            temp.clear();
            I++;
            J = 0;
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}