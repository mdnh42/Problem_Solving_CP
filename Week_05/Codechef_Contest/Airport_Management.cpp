#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arrival[n], departure[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arrival[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> departure[i];
        }

        int runways = 1;
        for (int i = 0; i < n; i++)
        {
            if (arrival[i] < departure[i])
            {
                runways = max(runways, 2);
            }
            else
            {
                runways = max(runways, 1);
            }
        }

        cout << runways << endl;
    }
    return 0;
}