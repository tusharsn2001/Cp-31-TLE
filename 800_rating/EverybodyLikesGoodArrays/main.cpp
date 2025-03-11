#include <bits/stdc++.h>
using namespace std;

// bool checkSameParity(int x, int y)
// {
//     if (x % 2 != y % 2)
//     {
//         return false;
//     }
//     else
//     {
//         return true;
//     }
// }
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
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            // if (checkSameParity(arr[i], arr[i + 1]))
            if (((arr[i] % 2 == 1) && (arr[i + 1] % 2 == 1)) || ((arr[i] % 2 == 0) && (arr[i + 1] % 2 == 0)))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}