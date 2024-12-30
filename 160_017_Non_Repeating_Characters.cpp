#include <bits/stdc++.h>
using namespace std;
char nonRepeatingChar(string &s)
{
    // Your code here
    unordered_map<char, int> umap;
    for (int i = 0; i < s.size(); i++)
        umap[s[i]]++;
    for (int i = 0; i < s.size(); i++)
        if (umap[s[i]] == 1)
            return s[i];
    return '$';
}
int main()
{
    string s;
    cin >> s;

    cout << nonRepeatingChar(s);
    return 0;
}