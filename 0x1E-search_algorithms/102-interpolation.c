#include "search_algos.h"

/**
 * jump_search -  a function that searches for a value in an
 *    array of integers using the Jump search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return:  return the first index where value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	int i, jump;

	if (array == NULL)
		return (-1);

	/** Jump search algorithm **/
	jump = floor(sqrt(size));

	for (i = 0; i < (int)size + 3; i += jump)
	{

		if (array[i] >= value && i < (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n", i - 3, i);
			for (i = (i - 3); i < (int)size; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
				return (value);
			}
		}

		 /* If out of range */
		if (i >= (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n", i - 3, i);
			for (i = (i - 3); i < (int)size; i++)
			{
				printf("-Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
				return (value);
			}
			return (-1);
		}

		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}

	return (-1);
}
 