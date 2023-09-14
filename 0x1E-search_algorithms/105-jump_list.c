#include "search_algos.h"


/**
 * jump_list - a function that searches for a value in a sorted list
 *  of integers using the Jump search algorithm.
 * @list: number list to search for value
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return:  return the first index where value is located.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int i, j, step2, step1;
	listint_t *prev = list, *ptr = list;

	if (list == NULL)
		return (NULL);
	/** Jump search algorithm **/
	step1 = 0;
	step2 = sqrt(size);
	i = 0;
	while (ptr->n < value)
	{
		j = 0;
		step1 = i;
		prev = ptr;
		while (j < step2 && ptr->next)
		{
			ptr = ptr->next;
			i++;
			++j;
		}
		printf("Value checked at index [%d] = [%d]\n", i, ptr->n);
		if (!ptr->next)
			break;
	}
	if (!ptr->next)
		step2 = step1;
	else
		step2 = i >= step2 ? i - step2 : 0;
	printf("Value found between indexes [%d] and [%d]\n", step2, i);
	ptr = prev;
	i = i >= (int)size ? (int)size - 1 : i;
	while (ptr)
	{
		printf("Value checked at index [%d] = [%d]\n", step2, ptr->n);
		if (ptr->n == value)
			return (ptr);
		ptr = ptr->next;
		step2++;
	}
	return (NULL);
}
