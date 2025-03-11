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
        int countNegativeOnes = 0;
        int countPositiveOnes = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == -1)
                countNegativeOnes++;
            else
                countPositiveOnes++;
        }
        if (countNegativeOnes > countPositiveOnes)
        {
            int ops = countNegativeOnes - (n / 2);
            if ((n / 2) % 2 == 1)
                ops += 1;
            cout << ops << endl;
        }
        else
        {
            if (countNegativeOnes % 2 != 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}