/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    int frequncy[100010] = {0};
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        frequncy[arr[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (frequncy[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
