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
	int i, jump, gap;

	if (array == NULL)
		return (-1);

	/** Jump search algorithm **/
	gap = floor(sqrt(size));

    i = 0;
    jump = 0;
	while (jump < (int)size && array[jump] < value)
    {
        printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
        i = jump;
        jump += gap;
    }

    printf("Value found between indexes [%d] and [%d]\n", i, jump);

	/* If out of range */
    if (jump > (int)size - 1)
        jump = size - 1;

    for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

	printf("Value checked array[%d] = [%d]\n", i, array[i]);

	return (array[i] == value ? i : -1);
}
