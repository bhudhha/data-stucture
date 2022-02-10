#include <bits/stdc++.h>
using namespace std;
int compare(string X, string Y)
{
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX) > 0 ? 1 : 0;
}
string printLarge(vector<int> &arr1)
{
    vector<string> arr(4);
    for (int i = 0; i < 4; i++)
    {
        arr[i] = to_string(arr1[i]);
    }
    sort(arr.begin(), arr.end(), compare);
    string s;
    s = arr[0];
    for (int i = 1; i < 4; i++)
    {
        s = s.append(arr[i]);
    }
    return s;
}
int main()
{

    vector<int> arr(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    printLarge(arr);
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
}