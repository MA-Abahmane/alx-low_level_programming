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
	int low, i, high;

	if (array == NULL)
		return (-1);

	/** Interpolation search algorithm **/
	low = 0;
	high = size -1;
	while (low <= high)
	{
		i = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));

		if (i < (int)size )
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%d] is out of range\n", i);
			break;
		}

		/* Get to the value */
		if (array[i] > value)
		{
			low = i - 1;
		}
		else if (array[i] < value)
		{
			high = i + 1;
		}
		else
		{	
			return (i);
		}
	}

	return (-1);
}
