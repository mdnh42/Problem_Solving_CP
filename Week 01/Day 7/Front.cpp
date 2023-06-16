/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
ITZMRNH

template:
int t;
cin>>t;
while(t--)
{

}


*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        cout << arr[start] << " ";
        if (start != end)
        {
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }
    cout << endl;

    return 0;
}
