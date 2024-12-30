#include <bits/stdc++.h>
using namespace std;
class GFG
{
public:
    bool isPallindrome(string &s)
    {
        int n = s.size();
        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            if (s[i] != s[j])
                return false;
        }
        return true;
    }
    void Partition(vector<vector<string>> &result, string &s, int index, vector<string> currentList)
    {
        if (index == s.size())
        {
            result.push_back(currentList);
            return;
        }

        string t;

        for (int i = 0; i < s.size(); i++)
        {
            t.push_back(s[i]);
            if (isPallindrome(t))
            {
                currentList.push_back(t);
                Partition(result, s, i + 1, currentList);
                currentList.pop_back();
            }
        }
    }
};
int main()
{
    GFG object;
    string s;
    cin >> s;

    vector<vector<string>> result;
    int s_index = 0;
    vector<string> currentList;

    object.Partition(result, s, s_index, currentList);
    for (auto &v : result)
    {
        for (auto &it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}