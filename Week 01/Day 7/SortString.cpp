/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
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
const int MAX_SIZE = 26;
int frequency[MAX_SIZE] = {0};
int main()
{
    int t;
    cin >> t;
    string str;
    cin >> str;

    int n = str.length();

    for (char ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            frequency[ch - 'a']++;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            frequency[ch - 'A']++;
        }
    }

    for (int i = 0; i < MAX_SIZE; i++)
    {

        if (frequency[i] > 0)
        {
            char ch = 'a' + i;
            cout << ch;
        }
    }

    return 0;
}
