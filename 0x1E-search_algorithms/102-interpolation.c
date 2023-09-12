#include "search_algos.h"


/**
 * interpolation_search -  a function that searches for a value in an
 *    array of integers using the Interpolation search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return:  return the first index where value is located.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t mid;
	int low = 0, high = (size - 1);

	if (array == NULL)
		return (-1);

	/** Interpolation search algorithm **/
	while ((array[high] != array[low]) && (value <= array[high]) &&
	(value >= array[low]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low]))
		 * (value - array[low]));

		if (array[mid] > value)
		{
			printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
			low = mid - 1;
		}
		else if (array[mid] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
			high = mid + 1;
		}
		else
		{	printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
			return (mid);
		}
	}

	if (value == array[low])
		return (low);

	if (mid < size)
	{
		mid = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));
		printf("Value checked array[%ld] is out of range\n", mid);
		return (-1);
	}
	return (-1);
}
