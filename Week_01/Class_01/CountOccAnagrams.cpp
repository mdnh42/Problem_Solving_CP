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
int search(string pat, string txt)
{
    int k = pat.size(), i = 0, j = 0;

    int fr1[26] = {0};
    int fr2[26] = {0};

    for (char c : pat)
    {
        fr1[c - 'a']++;
    }

    int ans = 0;

    while (j < txt.size())
    {
        fr2[txt[j] - 'a']++;
        if (j < k - 1)
        {
            j++;
        }
        else
        {
            bool flag = true;
            for (int v = 0; v < 26; v++)
            {
                if (fr1[v] != fr2[v])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans++;
            fr2[txt[i] - 'a']--;
            i++;
            j++;
        }
    }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string txt, pat;
    cin >> txt >> pat;

    auto ans = search(pat, txt);

    cout << ans << endl;

    return 0;
}
