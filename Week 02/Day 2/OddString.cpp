/*
Problem Link: https://atcoder.jp/contests/abc072/tasks/abc072_b?lang=en
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
    string str;
    getline(cin, str);
    string output = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i % 2 == 0)
        {
            output += str[i];
        }
    }

    cout << output << endl;
    return 0;
}
