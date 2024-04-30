#include "sort.h"
/**
 *selection_sort - function to print sorted array
 *using selection sort
 *@array: array to be sorted
 *@size: size of array
 *Return: None
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp;
	size_t min;

	if (array == NULL && size == 0)
		return;
	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (array[min] < array[i])
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
