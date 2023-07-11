#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MAX = 50000;

int main()
{
    vector<int> last(MAX + 777, 0);

    int numTests;
    cin >> numTests;

    for (int test = 0; test < numTests; ++test)
    {
        int m;
        cin >> m;

        vector<vector<int>> a_;
        for (int day = 0; day < m; ++day)
        {
            int n;
            cin >> n;

            vector<int> a(n);
            for (int i = 0; i < n; ++i)
            {
                cin >> a[i];
                last[a[i]] = day;
            }
            a_.push_back(a);
        }

        vector<int> ans(m, -1);
        for (int day = 0; day < m; ++day)
        {
            for (int x : a_[day])
            {
                if (last[x] == day)
                {
                    ans[day] = x;
                }
            }
            if (ans[day] == -1)
            {
                cout << -1 << endl;
                break;
            }
        }
        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
