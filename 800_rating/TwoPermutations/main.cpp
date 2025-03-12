#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;

        cin >> n >> a >> b;
        if ((a + b) >= n - 1)
        {
            if (n == a && n == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}