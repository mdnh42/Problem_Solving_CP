
// https : // atcoder.jp/contests/abc209/submissions/41911369


#include <iostream>
        using namespace std;

int main()
{
    int A, B;
    int count = 0;
    cin >> A >> B;

    if (A < B)
    {
        cout << B - A + 1 << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}