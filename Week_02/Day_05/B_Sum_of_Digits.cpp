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

    string str;
    cin >> str;
    int sum = 11;

    if (str.size() < 2)
    {
        cout << 0 << endl;
        return 0;
    }
    int cnt = 0;
    while (sum >= 10)
    {
        sum = 0;
        for (int i = 0; i < str.size(); i++)
        {
            sum += str[i] - '0';
        }
        str = to_string(sum);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
