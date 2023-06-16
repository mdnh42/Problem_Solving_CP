/*
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
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

    string modiedStr;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            modiedStr += ' ';
        }
        else
        {
            if (str.find("EGYPT", i) == i)
            {
                modiedStr += " ";
                i += 4;
            }
            else
            {
                modiedStr += str[i];
            }
        }
    }
    cout << modiedStr << endl;
    return 0;
}
