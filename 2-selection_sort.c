#include "sort.h"

/**
 * selection_sort - sorts an array of integers using selection sort
 * @array: variable
 * @size: variable
 * Return: 0
 */
void selection_sort(int *array, size_t size)
{
	size_t b, pos, i;
	int min, tmp;

	while (b < size)
	{
		i = b;
		min = array[b];
		pos = b;
		while (i < size)
		{
			if (array[i] < min)
			{
				min = array[i];
				pos = i;
			}
			i++;
		}
		if (pos != b)
		{
			tmp = array[b];
			array[b] = array[pos];
			array[pos] = tmp;
			print_array(array, size);
		}
		b++;
	}
}
