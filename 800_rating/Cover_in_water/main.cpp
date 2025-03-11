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
        string str;
        cin >> str;

        int e = 0;
        bool f = true;

        for (int i = 0; i < n; i++)
        {

            if (str[i] == '.')
            {
                e++;
            }
            if (i > 0 && i < n - 1)
            {
                if (str[i - 1] == '.' && str[i] == '.' && str[i + 1] == '.')
                {
                    cout << 2 << endl;
                    f = false;
                    break;
                }
            }
        }
        if (f)
            cout << e << endl;
    }
    return 0;
}