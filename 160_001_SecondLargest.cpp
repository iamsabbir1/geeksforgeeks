#include <bits/stdc++.h>
using namespace std;
int getSecondLargest(vector<int> &arr)
{
    // Code Here
    sort(arr.begin(), arr.end());
    int n = arr.size();

    int secondlargest = arr[n - 1];

    for (int i = n - 1; i >= 0; i--)
    {
        if (secondlargest > arr[i])
            secondlargest = arr[i];
        if (secondlargest != arr[n - 1])
            return secondlargest;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << getSecondLargest(arr);
}