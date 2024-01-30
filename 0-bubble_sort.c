#include "sort.h"
/**
* bubble_sort - Sorts an array of integers in ascending order using Bubble sort
* algorithm.
* @array: Pointer to the first element of the array to be sorted.
* @size: Number of elements in the array to be sorted.
*/
void bubble_sort(int *array, size_t size)
{
	size_t temp, i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
