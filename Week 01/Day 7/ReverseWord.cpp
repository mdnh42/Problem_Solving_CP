/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
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
    getline(cin, str);

    string reverseSentence;
    string word;

    int start = 0;
    int end = str.find(' ');

    while (end != string::npos)
    {
        word = str.substr(start, end - start);
        reverse(word.begin(), word.end());
        reverseSentence += word + ' ';

        start = end + 1;
        end = str.find(' ', start);
    }

    word = str.substr(start);
    reverse(word.begin(), word.end());
    reverseSentence += word;

    cout << reverseSentence << endl;

    return 0;
}
