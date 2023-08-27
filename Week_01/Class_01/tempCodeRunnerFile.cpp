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
    int t;
    cin >> t;
    while (t--)
    {
        string txt, pat;
        cin >> txt >> pat;

        int ans = search(txt, pat);

        cout << ans << endl;
    }
    return 0;
}
