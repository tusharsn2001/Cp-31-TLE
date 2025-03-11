#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int num = accumulate(arr.begin(), arr.end(), 0, std::bit_xor<int>());
        if (n % 2 != 0)
        {
            cout << num << endl;
        }
        else
        {
            if (num == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}