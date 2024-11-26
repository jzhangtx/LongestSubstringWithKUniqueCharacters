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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
