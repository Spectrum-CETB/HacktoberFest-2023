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
