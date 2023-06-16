/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int sum = 0;
        for (int i = x; i <= y; i++)
        {
            sum += arr[i];
        }

        cout << sum << endl;
    }

    return 0;
}
