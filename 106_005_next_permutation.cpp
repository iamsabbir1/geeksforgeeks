#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr)
{
    for (int i = 0, j = arr.size() - 1; i < j; i++, j--)
        swap(arr[i], arr[j]);
}
void nextPermutation(vector<int> &arr)
{
    // code here
    int i = arr.size() - 1;
    vector<int> temp = arr;
    int large = -1, seclarge = -1;
}

void permutation(vector<int> &arr, int l, int r)
{
    if (l == r)
    {
        for (int num : arr)
            cout << num << " ";
        cout << endl;
        return;
    }
    for (int i = l; i <= r; i++)
    {
        swap(arr[l], arr[i]);
        permutation(arr, l + 1, r);
        swap(arr[l], arr[i]);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    permutation(arr, 0, arr.size() - 1);
}