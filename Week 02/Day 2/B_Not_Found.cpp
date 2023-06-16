/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int frequency[26] = {0};

    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            frequency[tolower(str[i]) - 'a']++;
        }
    }

    char smallestChar = 'a';
    while (smallestChar <= 'z' && frequency[smallestChar - 'a'] > 0)
    {
        smallestChar++;
    }

    if (smallestChar <= 'z')
    {
        cout << smallestChar << endl;
    }
    else
    {
        cout << "None" << endl;
    }
    return 0;
}
