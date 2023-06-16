// https: // codeforces.com/group/MWSDmqGsZm/contest/326907/problem/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        vector<int> temp;
        for (int i = 0; i <= N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int ans = arr[i] + arr[j] + j - i;
                temp.push_back(ans);
            }
        }

        int min = *min_element(temp.begin(), temp.end());
        cout << min << endl;
    }

    return 0;
}
