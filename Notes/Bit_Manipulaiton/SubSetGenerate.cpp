/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<vector<int>> subsets;
    for (int i = 0; i < (1 << n); i++)
    {
        vector<int> subset;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j) != 0)
            {
                subset.push_back(a[j]);
            }
        }
        subsets.push_back(subset);
    }

    for (int i = 0; i < subsets.size(); i++)
    {
        for (auto val : subsets[i])
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
