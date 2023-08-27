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
    int n;
    cin >> n;

    int arr[n];
    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        unique ^= arr[i];
    }

       cout << unique << endl;

    return 0;
}
