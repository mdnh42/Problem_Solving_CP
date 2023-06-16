/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str1, str2;
    cin >> str1;
    cin >> str2;

    int n = str1.length();
    int m = str2.length();

    int count = 0;
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (str1[i] != str2[j])
        {
            count++;
            if (n < m)
            {
                i++;
            }
            else if (n > m)
            {
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        else
        {
            i++;
            j++;
        }
    }
    count += (n - i) + (m - j);

    cout << count << endl;
    return 0;
}
