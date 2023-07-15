#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x <= 15)
        {
            if (x <= 10)
            {
                cout << "Lower Double" << endl;
            }
            else
            {
                cout << "Lower Single" << endl;
            }
        }
        else
        {
            if (x <= 25)
            {
                cout << "Upper Double" << endl;
            }
            else
            {
                cout << "Upper Single" << endl;
            }
        }
    }
    return 0;
}
