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
        int count = 0;
        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {

            if (arr[i] == 0)
            {
                count += 1;
                curr = max(curr, count);
            }
            else if (arr[i] == 1)
            {
                curr = max(curr, count);
                count = 0;
            }
        }
        cout << curr << endl;
    }
    return 0;
}