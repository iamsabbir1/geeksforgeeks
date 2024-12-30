#include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr)
{
    // code here
    for (int i = 0, j = arr.size() - 1; i < j; i++, j--)
        swap(arr[i], arr[j]);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverseArray(arr);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}