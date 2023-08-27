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
    int n;
    cin >> n;

    vector<int> swipes(n);
    for (int i = 0; i < n; i++)
    {
        cin >> swipes[i];
    }
    set<int> inOffice;
    int maxCount = 0;

    for (int id : swipes)
    {
        if (inOffice.count(id) > 0)
        {

            inOffice.erase(id);
        }
        else
        {

            inOffice.insert(id);
        }

        int currentCount = inOffice.size();
        maxCount = max(maxCount, currentCount);
    }

    cout << maxCount << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
