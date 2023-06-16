/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B
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
const int MAX_SIZE = 1e5 + 10;
int frequency[MAX_SIZE] = {0};
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int minV = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        frequency[arr[i]]++;
    }

    if (minV % 2 == 1)
    {
        cout << "Lucky" << endl;
    }

    return 0;
}
