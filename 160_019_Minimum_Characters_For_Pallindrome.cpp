#include <bits/stdc++.h>
using namespace std;
vector<int> buildLPS(string &s)
{
    int n = s.size();
    vector<int> lps(n, 0);
    int len = 0;
    int i = 1;
    while (i < n)
    {
        if (s[i] == s[len])
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
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}
int minChar(string &s)
{
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    string concat = s + "#" + rev_s;

    vector<int> lps = buildLPS(concat);
    return s.size() - lps.back();
}
int main()
{
    string s;
    cin >> s;

    cout << minChar(s);
    return 0;
}