#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int index = 0;
        int maxDiff = INT_MAX;
        bool status = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                status = true;
                break;
            }
            else if (arr[i + 1] - arr[i] < maxDiff)
            {
                index = i;
                maxDiff = arr[i + 1] - arr[i];
            }
        }
        if (status)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (arr[index + 1] - arr[index]) / 2 + 1 << endl;
        }
    }
    return 0;
}