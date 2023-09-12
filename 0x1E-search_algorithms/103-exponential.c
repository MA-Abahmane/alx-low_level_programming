#include "search_algos.h"

int min(int a, int b)
{
	return (a < b ? a : b);
}

/**
 * exponential_search -  a function that searches for a value in an
 *    array of integers using the Exponential search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return:  return the first index where value is located.
 */

int exponential_search(int *array, size_t size, int value)
{
	int i = 1;


	if (array == NULL)
		return (-1);

	/** Exponential search algorithm **/
	for (; i < (int)size; i *= 2)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] > value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i / 2, i);
			break;
		}
	}

	return (SFunc(array, i / 2, min(i + 1, size), value));
}


/**
 * SFunc -  a function that searches for a value in an
 *    array of integers using the Binary search algorithm [Recursion].
 * @array: is a pointer to the first element of the array to search in
 * @start: start index of the array to search
 * @end: end index of the array to search
 * @value: the value to search for
 *
 * Return:  return the first index where value is located.
 */

int SFunc(int *array, int start, int end, int value)
{
	int mid;

	if (start > end || (start == end && array[start] != value))
		return (-1);

	/* split array in the middle into two parts and set mid number as pivot */
	mid = floor((start + end) / 2);

	/* if pivot is the value return, else; keep searching in recursion */
	if (array[mid] == value)
		return (mid);

	else if (array[mid] > value)
	{
		/* print current search array */
		print_array(array, start, mid - 1);
		return (SFunc(array, start, mid - 1, value));
	}
	else if (array[mid] < value)
	{
		print_array(array, mid + 1, end);
		return (SFunc(array, mid + 1, end, value));
	}
	else
		return (-1);
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
