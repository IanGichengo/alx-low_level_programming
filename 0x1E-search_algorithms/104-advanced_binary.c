#include "search_algos.h"

/**
 * print_array - Prints the elements of an array
 * @array: Pointer to the first element of the array
 * @left: Index of the leftmost element to print
 * @right: Index of the rightmost element to print
 *
 * Description: Prints the elements of the array from left to right
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * advanced_binary_recursion - Recursively searches for a value in sorted array
 * @array: Pointer to the first element of the array
 * @left: Index of the leftmost element of the current array/subarray
 * @right: Index of the rightmost element of the current array/subarray
 * @value: Value to search for
 *
 * Return: Index where @value is located, or -1 if not found
 */

int advanced_binary_recursion(int *array, size_t left, size_t right, int value)
{
	if (right >= left)
	{
		size_t mid = left + (right - left) / 2;

		print_array(array, left, right);
		if (array[mid] == value && (mid == left || array[mid - 1] != value))
			return (mid);
		if (array[mid] >= value)
			return (advanced_binary_recursion(array, left, mid, value));
		return (advanced_binary_recursion(array, mid + 1, right, value));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where @value is located, or -1 if not found or @array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (advanced_binary_recursion(array, 0, size - 1, value));
}
