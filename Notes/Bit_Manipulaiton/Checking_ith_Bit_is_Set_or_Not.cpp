/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i;
    cin >> n >> i;

    int x = n >> i;
    if ((x & 1) != 0)
    {
        yes;
    }
    else
    {
        no;
    }
    return 0;
}
