# <MAXIMUM_SUM>
  < Given an array arr[] of size N. The task is to find the sum of the contiguous subarray within a arr[] with the largest sum.>

# Problem Explanation 🚀
    we need to find the subarray in a given array that has the maximum sum of its elements. In other words, we are looking for a contiguous subarray in the given array whose sum is maximum.

    For example, consider the following array:

    arr = [-2, -3, 4, -1, -2, 1, 5, -3]
    The largest sum contiguous subarray in this array is [4, -1, -2, 1, 5], which has a sum of 7.

    The problem of finding the largest sum contiguous subarray has a well-known algorithm called Kadane’s algorithm.

# Your logic 🤯
* Approach
    Initialize the variables max_so_far = INT_MIN and max_ending_here = 0
    Run a for loop from 0 to N-1 and for each index i: 
    Add the arr[i] to max_ending_here.
    If  max_so_far is less than max_ending_here then update max_so_far  to max_ending_here.
    If max_ending_here < 0 then update max_ending_here = 0
    Return max_so_far

* Own test cases if any
    If we are entering 8 elements (N = 8), with array element values as -1,-5,5,3,-2,5,4 and 1 then,
    The largest contiguous subarray is: 5 3 -2 5 4 1
    The sum of the largest contiguous subarray is: 16
* Code Structure and Libraries used
    <stdio.h>


# Time Complexity and Space Complexity

    Time Complexity -> O(N)
    Space Complexity -> O(1)

```