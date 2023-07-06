#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main()
{
    int t;
    cin >> t;
    forn(tt, t)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        int ax = min(a, x);
        int by = min(b, y);
        a -= ax;
        x -= ax;
        b -= by;
        y -= by;
        if (c >= x + y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}