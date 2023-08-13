#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(4);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    for (auto i = s.rbegin(); i != s.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    set<int, greater<int>> scomp;

    scomp.insert(5);
    scomp.insert(6);
    scomp.insert(7);
    scomp.insert(5);

    for (auto i : scomp)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}