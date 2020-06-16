#include "sort.h"

/**
 * selection_sort - sorts an array of integers using selection sort
 * @array: variable
 * @size: variable
 * Return: 0
 */
void selection_sort(int *array, size_t size)
{
	size_t i, p, min;
	int tmp = 0;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (p = i + 1; p < size; p++)
		{
			if (array[p] < array[min])
				min = p;
		}

		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
