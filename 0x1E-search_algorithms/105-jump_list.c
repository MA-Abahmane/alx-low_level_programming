#include "search_algos.h"


/**
 * advanced_binary -  a function that searches for a value in an
 *    array of integers using the Binary search algorithm [Advanced].
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

    ptr = list;
    prev = list;

    /* Jump trough the list until we pass the
       index value passes the search value */
    i = 0;
	while (ptr->n < value)
	{
        j = 0;
        step1 = i;
        prev = ptr;
        while (ptr->next && j < step2)
        {
            ptr = ptr->next;
            i++;
            ++j;
        }

        printf("Value checked at index [%d] = [%d]\n", i, ptr->n);

        if (!ptr->next)
            break;
    }

    /* set the search end point */
    if (!ptr->next)
        step2 = step1;
    else
        step2 = i >= step2 ? i - step2 : 0;

    printf("Value found between indexes [%d] and [%d]\n", step2, i);

    i = i >= (int)size ? (int)size - 1 : i;
    ptr = prev;

    /* search for the value in the specified array range */
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
