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

    char x;
    cin >> x;
    if (x >= 'a' && x <= 'z')
    {
        char cL = x = 'a' + 'A';
        cout << cL << endl;
    }
    else if (x >= 'A' && x <= 'Z')
    {
        char ch = x - 'A' + 'a';
        cout << ch << endl;
    }

    return 0;
}
