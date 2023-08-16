#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        vector<int> a1(n);
        for (int i = 0; i < n; i++)
            scanf("%d", &a1[i]);
        int diffl = -1, diffr = -1;
        for (int j = 0; j < n; j++)
        {
            if (a[j] != a1[j])
            {
                diffr = j;
                if (diffl == -1)
                    diffl = j;
            }
        }
        while (diffl > 0 && a1[diffl - 1] <= a1[diffl])
            diffl--;
        while (diffr < n - 1 && a1[diffr + 1] >= a1[diffr])
            diffr++;
        printf("%d %d\n", diffl + 1, diffr + 1);
    }
}