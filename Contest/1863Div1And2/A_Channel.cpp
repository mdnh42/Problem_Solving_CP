#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, q;
        cin >> n >> a >> q;

        string notifications;
        cin >> notifications;

        int minOnline = a;
        int maxOnline = a;

        bool possible = true;
        if (n == a)
        {
            cout << "YES" << endl;
        }

        else if (n < q)
        {
            cout << ""
        }

        for (char c : notifications)
        {
            if (c == '+')
            {
                maxOnline++;
            }
            else
            {
                minOnline--;
            }

            minOnline = max(minOnline, 0);

            if (maxOnline < n)
            {
                possible = false;
            }
        }

        if (possible)
        {
            if (minOnline <= n && maxOnline >= n)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "MAYBE" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
