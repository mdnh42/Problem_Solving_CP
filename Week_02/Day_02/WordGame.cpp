/*
Problem Link: https://codeforces.com/contest/1722/problem/C
ITZMRNH

template:
int t;
cin>>t;
while(t--)
{

}


*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int N = 3;
    ios_base::sync_with_stdio(false);
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        vector<set<string>> v(N);
        for (long p = 0; p < N; p++)
        {
            for (long q = 0; q < n; q++)
            {
                string s;
                cin >> s;
                v[p].insert(s);
            }
        }

        vector<long> score(N, 0);
        for (long p = 0; p < N; p++)
        {
            for (set<string>::iterator it = v[p].begin(); it != v[p].end(); it++)
            {
                string x = *it;
                long cnt(0);
                for (long q = 0; q < N; q++)
                {
                    if (q == p)
                    {
                        continue;
                    }
                    cnt += v[q].count(x);
                }

                if (cnt == 0)
                {
                    score[p] += 3;
                }
                else if (cnt == 1)
                {
                    score[p] += 1;
                }
            }
        }

        for (long p = 0; p < N; p++)
        {
            cout << score[p] << " ";
        }
        cout << endl;
    }
    return 0;
}