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
int frequeny[MAX_SIZE] = {0};
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        frequeny[arr[i]]++;
    }

    for (int i = 1; i <= k; i++)
    {
        cout << frequeny[i] << endl;
    }

    return 0;
}
