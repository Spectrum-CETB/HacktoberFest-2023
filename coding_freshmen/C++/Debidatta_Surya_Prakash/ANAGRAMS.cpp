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
