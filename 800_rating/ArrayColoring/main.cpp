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
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                cnt++;
            }
        }
        if (cnt % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}