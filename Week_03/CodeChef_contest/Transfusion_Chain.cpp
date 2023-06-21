/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        unordered_map<string, int> bc;

        for (int i = 0; i < n; i++)
        {
            string bt;
            cin >> bt;
            bc[bt]++;
        }

        int max_chain = 0;

        max_chain = max(max_chain, bc["A"] + bc["AB"]);
        max_chain = max(max_chain, bc["B"] + bc["AB"]);
        max_chain = max(max_chain, bc["O"] + bc["B"] + bc["AB"]);
        max_chain = max(max_chain, bc["O"] + bc["A"] + bc["AB"]);

        cout << max_chain << endl;
    }
    return 0;
}
