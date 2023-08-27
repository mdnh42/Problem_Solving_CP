/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
struct Response
{
    int words;
    int quality;
};
void solve()
{
    int n;
    cin >> n;

    vector<Response> responses(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> responses[i].words >> responses[i].quality;
    }

    int maxQuality = 0;
    int winnerIndex = 0;

    for (int i = 0; i < n; ++i)
    {
        if (responses[i].words <= 10 && responses[i].quality > maxQuality)
        {
            maxQuality = responses[i].quality;
            winnerIndex = i;
        }
    }

    cout << winnerIndex + 1 << endl;
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
