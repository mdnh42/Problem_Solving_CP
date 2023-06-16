// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

/*
    itzmrnh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int array[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << array[i][M - j - 1] << " ";
        }
        cout << endl;
    }

    return 0;
}