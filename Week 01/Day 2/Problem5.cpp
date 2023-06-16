// https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string x = "";
    for (int i = 0; i < 4 - s.size(); i++)
    {
        x += '0';
    }

    cout << x + s << endl;
}