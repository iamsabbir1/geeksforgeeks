#include <bits/stdc++.h>
using namespace std;
vector<int> buildLPS(string &pat)
{
    int m = pat.size();

    vector<int> lps(m, 0);
    int len = 0;
    int i = 1;

    while (i < m)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
                lps[i] = 0;
            i++;
        }
    }
    return lps;
}
vector<int> search(string &pat, string &txt)
{
    vector<int> result;
    int n = txt.size();
    int m = pat.size();

    if (m == 0 || n == 0 || m > n)
        return result;

    vector<int> lps = buildLPS(pat);

    int i = 0;
    int j = 0;

    while (i < n)
    {
        if (pat[j] == txt[i])
        {
            i++;
            j++;
        }
        if (j == m)
        {
            result.push_back(i - j);
            j = lps[j - 1];
        }
        else if (i < n && pat[j] != txt[i])
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
    return result;
}
int main()
{
    string pat, txt;
    cin >> txt >> pat;

    vector<int> result = search(pat, txt);
    for (int index : result)
        cout << index << " ";
    cout << endl;

    return 0;
}