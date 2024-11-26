Longest Substring with K Unique Characters


Given a string str and a number k, find the length of the longest substring in str with exactly k unique characters.

If there are no possible substrings, return -1.

Examples
str: "aabcdaddaf"
k: 3
Explanation:
substrings with k unique characters: ["aabc", "abc", "bcd", "cda", "cdad", "cdadd", "cdadda", "daddaf", "addaf", "ddaf", "daf"]
longest substrings: ["cdadda", "daddaf"]
Result: 6
str: "mississippi"
k: 4
Explanation:
substrings with k unique characters: ["mississip", "mississipp", "mississippi"]
longest substrings: ["mississippi"]
Result: 11
str: "abcdef"
k: 3
Explanation:
substrings with k unique characters: ["abc", "bcd", "cde", "def"]
longest substrings: ["abc", "bcd", "cde", "def"]
Result: 3
str: "aaa"
k: 2
Explanation:
substrings with k unique characters: []
longest substrings: []
Result: -1
Testing
Input Format
The first line contains an integer ‘T’ denoting the number of test cases.

For each test case, the input has the string str and integer k (space-separated).

Output Format
For each test case, the output contains a line with an integer denoting the length of the longest substring in str with exactly k unique characters.

Sample Input
4
aabcdaddaf 3
mississippi 4
abcdef 3
aaa 2
Expected Output
6
11
3
-1