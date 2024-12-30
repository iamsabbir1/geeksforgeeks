#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> &arr)
{
    int maxProd = arr[0];
    int minProd = arr[0];
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            swap(maxProd, minProd);
        }
        maxProd = max(arr[i], maxProd * arr[i]);
        minProd = min(arr[i], minProd * arr[i]);
        result = max(result, maxProd);
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << maxProduct(arr);
}