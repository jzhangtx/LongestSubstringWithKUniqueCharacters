// LongestSubstringKChar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int CountChar(std::string::const_iterator i, int length)
{
    int count = 1;
    for (auto ii = i+1; ii != i + length; ++ii)
    {
        bool found = false;
        for (auto jj = i; jj != ii; ++jj)
        {
            if (*ii == *jj)
            {
                found = true;
                break;
            }
        }
        if (!found)
            ++count;
    }

    return count;
}

int LongestSubstringWithKUniqueCharacters(const std::string& str, int k)
{
    int length = k;
    bool gotOne = false;
    for (size_t i = 0; i < str.size() - k; ++i)
    {
        for (size_t j = length; j + i <= str.size(); ++j)
        {
            int count = CountChar(str.cbegin()+i, static_cast<int>(j));
            if (count == k)
            {
                gotOne = true;
                length = std::max(length, static_cast<int>(j));
            }
            else if (count > k)
                break;
        }
    }

    return gotOne ? length : -1;
}

int main()
{
    while (true)
    {
        std::cout << "String (\"q\" to exit): ";
        std::string s;
        std::cin >> s;
        if (s == "q" || s == "Q")
            break;

        std::cout << "How many unique characters: ";
        int k;
        std::cin >> k;

        std::cout << "The longest substring with " << k << "Unique characters is " << LongestSubstringWithKUniqueCharacters(s, k) << std::endl;
    }
}
