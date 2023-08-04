#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
main()
{
    pbds<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    s.insert(7);

    // for (auto val : s)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    cout << *s.find_by_order(3) << endl;

    return 0;
}