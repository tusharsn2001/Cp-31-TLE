#include <iostream>
int main()
{
    int t;
    std::cin >> t;
    int count = 0;
    while (t--)
    {
        int p, v, a;
        std::cin >> p >> v >> a;
        if (p + v + a >= 2)
        {
            count += 1;
        }
    }
    std::cout << count;
    return 0;
}