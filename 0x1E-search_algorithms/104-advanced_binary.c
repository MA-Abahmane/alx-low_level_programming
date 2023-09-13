#include "search_algos.h"

/**
 * advanced_binary -  a function that searches for a value in an
 *    array of integers using the Binary search algorithm [Advanced].
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return:  return the first index where value is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
	int *lst;

	if (array == NULL)
		return (-1);

	/** Binary search algorithm **/
	lst = looker(array, (int)size, value);
	return (!lst ? -1 : lst - array);
}


/**
 * looker -  a function that searches for a value in an
 *    array of integers using the Binary search algorithm [Recursion].
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 *
 * Return:  return the index of the [first] value in the array
 */

int *looker(int *array, int size, int value)
{
	int i;

	if (!size || !array)
		return (NULL);

	print_array(array, 0, size - 1);

	/* split array in the middle into two parts and set mid number as pivot */
	i = floor((size - 1) / 2);

	/* if pivot is the value return, else; keep searching in recursion */
	if (array[i] == value)
	{
		if (i)
			return (looker(array, i + 1, value));
		return (array + i);
	}
	else if (array[i] > value)
	{
		return (looker(array, i + 1, value));
	}
	else
	{
		return (looker(array + i + 1, size - i - 1, value));
	}
}


/**
 * print_array -  Print given array
 * @array: array to print
 * @start: first index in array
 * @end: last index in array
 *
 * Return:  None
 */

void print_array(int *array, int start, int end)
{
	int i, flag = 0;

	printf("Searching in array: ");

	for (i = start; i <= end; i++)
	{
		if (flag == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);

		flag++;
	}
	printf("\n");
}
