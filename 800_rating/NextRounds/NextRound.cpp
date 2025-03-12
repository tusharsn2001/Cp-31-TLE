#include <iostream>
#include <vector>
int main()
{
    int n, k;
    int count = 0;
    std::cin >> n >> k;
    std::vector<int> items(50);
    for (int i = 0; i < n; i++)
    {
        std::cin >> items[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (items[i] >= items[k - 1] && items[i] > 0)
        {
            count += 1;
        }
        // std::cout << items[i] << " ";
    }
    std::cout << count << std::endl;
    return 0;
}