#include <iostream>
using namespace std;

int main()
{

    int X, Y, H;
    cin >> X >> Y >> H;
    if (H > 1)
    {
        int extra = H - 1;
        cout << X + (extra * Y) << endl;
    }
    else
    {

        cout << H * X << endl;
    }

    return 0;
}