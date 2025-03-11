#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 1e9;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        ans = min(ans, abs(temp - 0));
    }
    cout << ans << endl;
    return 0;
}