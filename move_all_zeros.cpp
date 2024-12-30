#include <bits/stdc++.h>
using namespace std;
void naiveapproach(vector<int> &arr)
{
    vector<int> temp;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            temp.push_back(arr[i]);
    }
    for (int i = temp.size(); i < n; i++)
        temp.push_back(0);
    for (int i = 0; i < temp.size(); i++)
        cout << temp[i] << " ";
}
void pushZerosToEnd(vector<int> &arr)
{
    // code here
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    pushZerosToEnd(arr);
}