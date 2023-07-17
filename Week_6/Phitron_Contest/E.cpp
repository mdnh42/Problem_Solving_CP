/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    stack<char> st;
    for (auto i : s)
    {
        if (!st.empty() && st.top() != i)
        {
            st.pop();
            cnt++;
        }
        else
        {
            st.push(i);
        }
    }
    if (cnt % 2 == 0)
    {
        cout << "Ramos" << endl;
    }
    else
    {
        cout << "Zlatan" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
