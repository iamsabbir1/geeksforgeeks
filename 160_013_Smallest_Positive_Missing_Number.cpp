#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());

    int res = 1;
    for (int i = 0; i < n; i++)
    {
        if (!(arr[i] < 0) && res < arr[i])
            return res;
        else if (res <= arr[i] && !(arr[i] < 0))
        {
            res++;
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << missingNumber(arr);
}