/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int year;
    cin >> year;

    while (true)
    {
        year++;
        string yearStr = to_string(year);

        bool distinct = true;
        int digit[10] = {0};

        for (char d : yearStr)
        {
            int digitValue = d - '0';

            if (digit[digitValue] > 0)
            {
                distinct = false;
                break;
            }
            digit[digitValue]++;
        }

        if (distinct)
        {
            cout << year << endl;
            break;
        }
    }

    return 0;
}
