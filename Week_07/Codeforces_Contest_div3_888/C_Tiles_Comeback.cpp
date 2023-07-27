#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string canConstructPath(int n, int k, vector<int> &colors)
{
    unordered_map<int, int> colorFreq;
    int currentBlockCount = 0;

    for (int i = 0; i < n; ++i)
    {
        colorFreq[colors[i]]++;
        if (colorFreq[colors[i]] % k == 0)
        {
            currentBlockCount++;
            if (currentBlockCount == k)
            {
                currentBlockCount = 0;
            }
        }
    }

    return (currentBlockCount == 0) ? "YES" : "NO";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> colors(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> colors[i];
        }

        cout << canConstructPath(n, k, colors) << endl;
    }

    return 0;
}
