#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    s.insert(7);

    for (auto val : s)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}