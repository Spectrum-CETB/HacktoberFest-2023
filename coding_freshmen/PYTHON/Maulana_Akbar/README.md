# SORT_01

## Problem Description
You are given an array of 0s and 1s in random order. Your task is to segregate 0s on the left side and 1s on the right side of the array, effectively sorting the array.

**Input Array**: `[0, 1, 0, 1, 0, 0, 1, 1, 1, 0]`

**Output Array**: `[0, 0, 0, 0, 0, 1, 1, 1, 1, 1]`

## Problem Explanation 🚀
The problem requires you to rearrange the elements in the input array such that all 0s appear on the left side, and all 1s appear on the right side. This is essentially a sorting problem where you need to implement an efficient algorithm to achieve this segregation.

## Your Logic 🤯
### Approach
You can solve this problem using a two-pointer approach. Initialize two pointers, one at the beginning (left) of the array and one at the end (right) of the array. Then, iterate through the array, moving the left pointer to the right until it encounters a 1 and moving the right pointer to the left until it encounters a 0. When these pointers meet, swap the elements at the left and right pointers. Continue this process until the left pointer is less than the right pointer.

Here is a high-level overview of the steps:
1. Initialize `left = 0` and `right = len(arr) - 1`.
2. While left is less than right:
   - Move the left pointer to the right until a 1 is encountered `(arr[left] == 0)`.
   - Move the right pointer to the left until a 0 is encountered `(arr[right] == 1)`.
   - Swap the elements at the left and right pointers.
3. Return the modified array.

### Code Structure and Libraries Used
Here's a simple Python function that implements the above approach to segregate 0s and 1s in the array.

```python
def segregate_zeros_and_ones(arr):
    left = 0  # Pointer to the left side of the array
    right = len(arr) - 1  # Pointer to the right side of the array

    while left < right:
        # Move the left pointer to the right until a 1 is encountered
        while arr[left] == 0 and left < right:
            left += 1

        # Move the right pointer to the left until a 0 is encountered
        while arr[right] == 1 and left < right:
            right -= 1

        # Swap the elements at the left and right pointers
        if left < right:
            arr[left], arr[right] = arr[right], arr[left]

    return arr

# Test the function
input_array = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0]
output_array = segregate_zeros_and_ones(input_array)
print(output_array)
```
# Time Complexity and Space Complexity
The time complexity of this solution is O(n), where n is the length of the input array. This is because we traverse the array once with two pointers.
The space complexity is O(1) as we do not use any additional data structures that grow with the input size.
