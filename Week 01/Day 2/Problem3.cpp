// https://atcoder.jp/contests/abc124/tasks

#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if (A == B)
    {
        cout << A + B << endl;
    }
    else
    {
        int mx = max(A, B);
        cout << mx + mx - 1 << endl;
    }
    return 0;
}