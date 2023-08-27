// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

/*
    itzmrnh
*/
#include <bits/stdc++.h>
using namespace std;

bool isLucky(int N)
{
    string str = to_string(N);
    for (char c : str)
    {
        if (c != '4' && c != '7')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    cin >> A >> B;

    bool luckyNumber = false;

    for (int i = A; i <= B; i++)
    {
        if (isLucky(i))
        {
            cout << i << " ";
            luckyNumber = true;
        }
    }

    if (!luckyNumber)
    {
        cout << -1;
    }

    return 0;
}