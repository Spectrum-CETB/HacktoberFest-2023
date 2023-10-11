# Given two strings s and t, return true if t is an anagram of s, and false otherwise.

  Anagram is any word formed by rearranging the letters of original word, often using one letter only once 

# Problem Explanation 🚀
We are asked to input to 2 strings and assume wether 2nd one is an anagram with respect to to the first one or not.

> In The example:   
> A N A G R A M
> 
> 1 2 3 4 5 6 7
> 
> N A G A R A M
> 
> 2 1 4 3 5 6 7      

# Your logic 🤯
* Approach:
>  * I could have used **Brute Force** : two loops for keeping frequency of each character.
>  However Frequency of each character reminds me of something, ??? Maybe some kind of a map
>  * **HASH Table/Map** : I have to check if each character exists in the string once. Sooooooo, keep incrementing the letters from a base string into the hash map and decrement it when iterating the control String.

* Own test cases if any    
> ("aa","a") is one of them over the top of my head since i wanted it to work if base string has repetetive letters there is no necessity for it to repeat in Control String too.
* Code Structure and Libraries used    
> Map() in python from Collection

![Hash Maps](https://miro.medium.com/v2/resize:fit:450/1*eOcS6MFMkWxxSjnlb6SsBA.jpeg)  



# Time Complexity and Space Complexity
```cpp
Time Complexity -> O(n)
Space Complexity -> O(1)

```

If you are watching this dont write O(26) as space constant when you take ascii table as map. (Why? Drop Constant property of BIG-O Notation)
