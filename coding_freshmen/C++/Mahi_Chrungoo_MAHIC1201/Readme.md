# Anagram Checker

## Problem Explanation 🚀
You are given two strings, `s` and `t`. Your task is to determine if `t` is an anagram of `s`. An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

## Your Logic 🤯
### Approach
This problem can be solved by 
1. Sorting both the strings (lets say s1 and s2). Wr firstly check if the two strings have same/different length, only strings if same length can be anagrams.
2. Checking if both the strings are equal(using isAnagram() function that takes input of two strings).
Sorting in ascending order(sorting will be based on ascii values of the characters in the strings).
3. If both the strings are anagrams,both will get sorted in the same order.
(eg "anagram" will get sorted to "aaagmnr" and "nagaram" will also get sorted to "aaagmnr", hence they are anagrams), hence return true. 
4. Strings such as "rat", on sorting will become "atr", whereas "car" on sorting will become "acr", since atr!=acr, both the strings are not anagrams, hence return false.

### Code Structure and Libraries Used
```cpp
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1, string s2)
{
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    {
        return true;
    }
    return false;
}
int main()
{
  bool ans;
  string a;
  string b;
  cin>>a>>b;
  ans=isAnagram(a,b);
  if(a.length()!=b.length())
  {
    cout<<"false";
  }
  else if(ans==1)
  {
    cout<<"true";
  }
  else if(ans==0)
  {
    cout<<"false";
  }
}
```

## Time Complexity and Space Complexity
```cpp
Example 

Time Complexity -> O(n*log(n)) for sorting
Space Complexity -> O(1) 
```
The time complexity of the solution is O(n * log(n)) because that is the time taken for the sort operation. The space complexity is O(1) because the space used by the two strings a and b created for taking input and a bool variable ans for output.