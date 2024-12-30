#include <bits/stdc++.h>
using namespace std;
void pushZerosToEnd(vector<int> &arr)
{
    int track = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[track] = arr[i];
            track++;
        }
    }

    for (int i = track; i < n; i++)
        arr[i] = 0;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
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