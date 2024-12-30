#include <bits/stdc++.h>
using namespace std;

void rotateArr(vector<int> &arr, int d)
{
    // code here
    vector<int> temp;
    d %= arr.size();
    for (int i = d; i < arr.size(); i++)
        temp.push_back(arr[i]);

    for (int i = 0; i < d; i++)
        temp.push_back(arr[i]);
    for (int i = 0; i < temp.size(); i++)
        arr[i] = temp[i];
}
int main()
{
    int n, d;

    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    rotateArr(arr, d);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}