# Anagram Checker

## Problem Explanation 🚀
You are given two strings, `s` and `t`. Your task is to determine if `t` is an anagram of `s`. An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

## Your Logic 🤯
### Approach
You can solve this problem by counting the frequency of characters in both strings and then comparing the counts. If the character counts for both strings match, then the strings are anagrams. Here's how you can do it:

1. Initialize an unordered map `charCount` to store the character frequencies of string `s`.
2. Iterate through string `s` and count the frequency of each character, storing it in the `charCount` map.
3. Iterate through string `t` and decrement the corresponding character count in the `charCount` map.
4. If all characters in `t` are used and their counts match (i.e., they are all decremented to zero), then `t` is an anagram of `s`.

### Code Structure and Libraries Used
```cpp
#include <iostream>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    
    unordered_map<char, int> charCount;

    // Count character frequency in string s
    for (char c : s) {
        charCount[c]++;
    }

    // Decrement character count based on string t
    for (char c : t) {
        if (charCount.find(c) == charCount.end() || charCount[c] <= 0) {
            return false; // If the character is not in the map or its count is already 0, not an anagram
        }
        charCount[c]--;
    }

    return true; // If all characters in t are used and their counts match, it's an anagram
}

int main() {
    string s1 = "anagram";
    string t1 = "nagaram";
    cout << boolalpha << isAnagram(s1, t1) << endl; // Output: true

    string s2 = "rat";
    string t2 = "car";
    cout << boolalpha << isAnagram(s2, t2) << endl; // Output: false

    return 0;
}
```

## Time Complexity and Space Complexity
```cpp
Example 

// Time Complexity -> O(n)
// Space Complexity -> O(1)
```

In the given code, `n` represents the length of the input strings `s` and `t`. The time complexity of the solution is O(n) because both strings are iterated only once. The space complexity is O(1) because the space used by the unordered map `charCount` is constant and does not depend on the input size.