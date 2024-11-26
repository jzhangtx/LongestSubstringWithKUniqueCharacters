LongestSubstringKChar: LongestSubstringKChar.o
	g++ -g -o LongestSubstringKChar.exe LongestSubstringKChar.o -pthread    

LongestSubstringKChar.o: LongestSubstringKChar/LongestSubstringKChar.cpp
	g++ -g  -c -pthread LongestSubstringKChar/LongestSubstringKChar.cpp
