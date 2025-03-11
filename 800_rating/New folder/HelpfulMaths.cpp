#include <iostream>
#include <string>

std::string repeatString(std::string str, int times)
{
    std::string output = "";
    for (int i = 0; i < times; ++i)
    {
        output += str;
    }
    return output;
}

int main()
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    std::string s;
    std::cin >> s;

    // Count occurrences of '1', '2', and '3'
    for (int i = 0; i < s.size(); i += 2)
    {
        if (s[i] == '1')
        {
            n1 += 1;
        }
        else if (s[i] == '2')
        {
            n2 += 1;
        }
        else if (s[i] == '3')
        {
            n3 += 1;
        }
    }

    // Generate the output string
    std::string ans = repeatString("1+", n1) + repeatString("2+", n2) + repeatString("3+", n3);

    std::cout << ans.substr(0, ans.size() - 1) << std::endl;

    return 0;
}
