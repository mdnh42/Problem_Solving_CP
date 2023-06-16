/*
Problem Link: https://codeforces.com/contest/1703/problem/B
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

    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> charMap;
        int n;
        cin >> n;
        char key;

        for (int i = 0; i < n; i++)
        {
            cin >> key;
            if (charMap.find(key) != charMap.end())
            {
                charMap[key]++;
            }
            else
            {
                charMap[key] = 2;
            }
        }

        map<char, int>::iterator it = charMap.begin();
        int sum = 0;
        while (it != charMap.end())
        {
            if (it->second >= 2)
            {
                sum += it->second;
            }
            ++it;
        }
        cout << sum << endl;
    }

    return 0;
}
