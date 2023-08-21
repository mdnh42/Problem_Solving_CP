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
#define SIZE 26
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(), v.end()

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_case;
    cin >> test_case;
    string all = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int t = 1; t <= test_case; t++)
    {
        int N, K;
        cin >> N >> K;
        string x, check;
        x = all.substr(0, N);
        check = x;
        cout << "Case " << t << ":" << '\n';
        for (int i = 1; i <= K; i++)
        {
            cout << x << '\n';
            next_permutation(x.begin(), x.end());
            if (x == check)
                break;
        }
    }
    return 0;
}
