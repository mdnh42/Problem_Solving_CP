#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int result = 0;
        int low = 0;
        int high = n - 1;

        while (low < high)
        {
            result += a[high] - a[low];
            low++;
            high--;
        }

        cout << result << endl;
    }

    return 0;
}
