package main

import "fmt"

func GetSubstringLength(s string, index, k int) int {
	m := make(map[byte]struct{})
	for i := index; i < len(s); i++ {
		_, f := m[s[i]]
		if !f {
			if len(m) == k {
				return i - index
			} else {
				m[s[i]] = struct{}{}
			}
		}
	}

	if len(m) == k {
		return len(s) - index
	}

	return -1
}

func LongestSubstringWithKUniqueCharacters(s string, k int) int {
	longest := -1

	for i := 0; i < len(s); i++ {
		longest = max(longest, GetSubstringLength(s, i, k))
	}

	return longest
}

func main() {
	for {
		fmt.Print("Please enter the string: ")
		var str string
		fmt.Scan(&str)
		if str == "q" || str == "Q" {
			break
		}

		fmt.Print("Please enter the number k: ")
		var k int
		fmt.Scan(&k)

		fmt.Println("The longest substring with K Unique characters is ", LongestSubstringWithKUniqueCharacters(str, k))
	}
}
