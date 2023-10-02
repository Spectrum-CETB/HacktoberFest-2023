# <2D_ARRAY_SUM>
  <Given a 2D array of order M * N, the task is to find out the sum of elements of the matrix. >

# Problem Explanation 🚀
    Here a matrix is given which is formed as 2D array. We have to add all the elements of that matrix.

# Your logic 🤯
* Approach
    The sum of each element of the 2D array can be calculated by traversing through the matrix and adding up the elements.
* Own test cases if any
    Input: array[2][2] = {{1, 2}, {3, 4}};
    Output: 10

    Input: array[4][4] = {{1, 2, 3, 4}, 
                         {5, 6, 7, 8}, 
                         {9, 10, 11, 12}, 
                         {13, 14, 15, 16}};
    Output: 136
* Code Structure and Libraries used
    It is a simple program that calculates the sum of elements in a 2D array using basic Java language constructs. It uses standard Java classes and methods for array manipulation and printing to the console.
# Time Complexity and Space Complexity
    The time complexity of the provided Java code = O(M * N),
    where M is the number of rows and N is the number of columns in the 2D array. This is because the code uses two nested loops to iterate through all elements of the array, and the number of iterations is directly proportional to the number of elements in the array (M * N).

    The space complexity of the code is O(1).
    because it uses a fixed amount of extra space for variables (i, j, sum, and x), regardless of the size of the input array. The space complexity is constant and does not depend on the size of the input array.

```