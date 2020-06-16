#include "sort.h"

/**
 * partition - put a pivot
 * @array: variable
 * @size: variable
 * @low: varible
 * @high: variable
 * Return: 0
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, w, i = low, s;

	pivot = array[high];
	w = low - 1;

	while (i <= high)
	{
		if (array[i] <= pivot)
		{
			w++;
			if (w != i)
			{
				s = array[w];
				array[w] = array[i];
				array[i] = s;
				print_array(array, size);
			}
		}
		i++;
	}
	return (w);
}

/**
 * quick_lomuto - partition scheme
 * @array: variable
 * @size: variable
 * @low: varible
 * @high: variable
 * Return: 0
 */
void quick_lomuto(int *array, int low, int high, size_t size)
{
	int i;

	if (low > high)
	{
		return;
	}

	i = partition(array, low, high, size);

	quick_lomuto(array, low, i - 1, size);
	quick_lomuto(array, i + 1, high, size);
}

/**
 * quick_sort - sorts an array of integer
 * @array: variable
 * @size: variable
 * Return: 0
 */
void quick_sort(int *array, size_t size)
{
	quick_lomuto(array, 0, size - 1, size);
}
