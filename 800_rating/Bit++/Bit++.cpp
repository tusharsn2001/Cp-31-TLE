#include <iostream>
#include <string>
int main()
{
    int count = 0;
    int n;
    std::cin >> n;
    std::string s;
    while (n--)
    {
        std::cin >> s;
        if (s[1] == '+')
        {
            count += 1;
        }
        else
        {
            count -= 1;
        }
    }
    std::cout << count;
    return 0;
}