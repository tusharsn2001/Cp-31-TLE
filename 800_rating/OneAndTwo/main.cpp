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
        int countTwos = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 2)
            {
                countTwos++;
            }
        }
        if (countTwos % 2 != 0)
        {
            cout << -1 << endl;
        }
        else if (countTwos == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            int res, k = 0;
            for (int i = 0; i < n; i++)
            {
                if (k == (countTwos / 2))
                {
                    res = i;
                    break;
                }
                if (arr[i] == 2)
                    k++;
            }

            cout << res << endl;
        }
    }
    return 0;
}