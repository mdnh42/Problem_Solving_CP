// https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int K;
    cin >> K;
    int Arr[N];
    for (int i = 0; i < N; i++)
        cin >> Arr[i];

    int I = 0, J = 0;
    int mx = INT_MIN;
    multiset<int> win;
    while (J < N)
    {

        if (J < K - 1)
        {
            win.insert(Arr[J]);
            J++;
        }
        else
        {
            win.insert(Arr[J]);
            I++;
            J++;
            mx = *win.rbegin();
            cout << mx << " ";
            win.erase(win.find(Arr[I - 1]));
        }
    }

    return 0;
}