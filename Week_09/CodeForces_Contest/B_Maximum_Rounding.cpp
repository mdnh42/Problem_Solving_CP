/*
itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define SIZE 26;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(), v.end()

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;

    vector<long long> input_values;
    for (int i = 0; i < T; ++i)
    {
        long long val;
        cin >> val;
        input_values.push_back(val);
    }

    for (int i = 0; i < T; ++i)
    {
        if (input_values[i] == 0)
        {
            cout << 0 << endl;
            continue;
        }

        int digits = log10(input_values[i]) + 1;
        long long factor = pow(10, digits);

        long long result = (input_values[i] + factor - 1) / factor * factor;
        cout << result << endl;
    }

    return 0;
}
