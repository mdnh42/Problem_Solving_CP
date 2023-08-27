#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        vector<int> vec(x);

        for (int i = 0; i < x; i++)
        {
            cin >> vec[i];
        }

        unordered_map<int, int> countMap;

        int maxOccurValue = -1;
        int maxOccurCount = 0;

        for (int num : vec)
        {
            int currCount = ++countMap[num];

            if (currCount >= 3 && num > maxOccurValue)
            {
                maxOccurValue = num;
                maxOccurCount = currCount;
            }
        }

        if (maxOccurCount > 0)
        {
            cout << maxOccurValue << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
