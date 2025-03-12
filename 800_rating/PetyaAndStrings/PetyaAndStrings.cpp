#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int check(string s1, string s2)
{
    for (int i = 0; i < s1.size(); i++)
    {
        if (tolower(s1[i]) < tolower(s2[i]))
        {
            return -1;
        }
        if (tolower(s1[i]) > tolower(s2[i]))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    cout << check(s1, s2);
    return 0;
}