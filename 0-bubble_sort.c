#include "sort.h"
/**
 *bubble_sort - function to print sorted array using bubble sort
 *@array: array to sort
 *@size: size of the array to be sorted
 *Return: None
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;
	int flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag += 1;
			}
			print_array(array, size);
		}
		if (flag == 0)
			break;
	}
}
