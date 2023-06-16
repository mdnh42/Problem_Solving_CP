/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
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
    string str;
    cin >> str;

    int start = 0;
    int end = str.length() - 1;
    bool palindrome = true;

    while (start <= end)
    {
        if (str[start] != str[end])
        {
            palindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (palindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
