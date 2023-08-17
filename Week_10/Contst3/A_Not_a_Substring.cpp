// /*
// itzmrnh
// */

// #include <bits/stdc++.h>
// using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// #define ll long long int
// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// #define SIZE 26;
// #define forn(i, n) for (int i = 0; i < int(n); i++)
// #define sz(v) (int)v.size()
// #define all(v) v.begin(), v.end()
// void solve()
// {
//     string s;
//     cin >> s;

//     int n = s.length();

//     stack<char> st;
//     string t = "()";

//     int unbalanced = 0;

//     for (int i = 0; i < n; i++)
//     {
//         char now = s[i];
//         if (now == '(')
//         {
//             st.push(now);
//         }
//         else
//         {
//             if (st.empty())
//             {
//                 unbalanced++;
//             }
//             else if (now == ')' && st.top() == '(')
//             {
//                 st.pop();
//             }
//         }
//     }

//     if (st.empty() && unbalanced == 0)
//     {
//         cout << "NO" << endl;
//     }
//     else
//     {
//         cout << "YES" << endl;

//         for (int i = 0; i < n; i++)
//         {
//             cout << t;
//         }

//         cout << endl;
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.length() / 2;

        cout << "YES" << endl;
        cout << "(" << s << ")" << endl;
    }

    return 0;
}
