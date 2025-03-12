#include <bits/stdc++.h>
using namespace std;
bool check(int num)
{
    int cnt = 0;

    while (num > 0)
    {
        int d = num % 10;
        if (d != 0)
        {
            cnt++;
        }
        num /= 10;
    }
    return cnt == 1;
}
set<int> candi;
int main()
{
    for (int i = 1; i < 1e7; i++)
    {
        if (check(i))
        {
            candi.insert(i);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for (auto it : candi)
        {
            if (it <= n)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}