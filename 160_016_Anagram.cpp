#include <bits/stdc++.h>
using namespace std;
bool areAnagrams(string &s1, string &s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1.compare(s2))
        return false;
    return true;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    cout << areAnagrams(s1, s2);
    return 0;
}