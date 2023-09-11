/**
 * print_array -  Print given array
 * @array: array to print
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