#include <bits/stdc++.h>
using namespace std;
vector<int> findMajority(vector<int> &arr)
{
    // Your code goes here.
    vector<int> res;
    int n = arr.size();

    unordered_map<int, int> unmap;
    for (int i = 0; i < arr.size(); i++)
        unmap[arr[i]]++;

    for (auto i : unmap)
    {
        if (i.second > (n / 3))
            res.push_back(i.first);
    }

    sort(res.begin(), res.end());
    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> res = findMajority(arr);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
}