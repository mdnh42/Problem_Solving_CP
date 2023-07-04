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
    int t;
    cin >> t;
    stack<string> st;
    while (t--)
    {
        string s;
        cin >> s;
        st.push(s);
    }
    map<string, bool> mp;
    while (!st.empty())
    {
        if (!mp[st.top()])
        {
            cout << st.top().substr(st.top().size() - 2);
            mp[st.top()] = true;
        }
        st.pop();
    }
    return 0;
}
