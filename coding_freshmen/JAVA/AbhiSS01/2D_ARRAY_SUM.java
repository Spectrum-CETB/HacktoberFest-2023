// Java code for the above approach
import java.io.*;

class ABH {
    // Get the size m and n
    static int M = 4;
    static int N = 4;

    // Function to calculate sum
    // of elements in 2d array
    static int sum(int arr[][])
    {
        int i, j;
        int sum = 0;

        // Finding the sum
        for (i = 0; i < M; ++i) {
        for (j = 0; j < N; ++j) {
            // Add the element
            sum = sum + arr[i][j];
        }
        }
        return sum;
    }

    public static void main (String[] args)
    {
        int i, j;
        int arr[][]= new int[M][N];

        // Get the matrix elements
        int x = 1;
        for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
            arr[i][j] = x++;

        // Get sum
        System.out.println(sum(arr));
    }
}

// This code is contributed by Abhijit Sahoo
