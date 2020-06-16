#include "sort.h"

/**
 * partition - put a pivot
 * @array: variable
 * @size: variable
 * @low: varible
 * @high: variable
 * Return: 0
 */
void _swap_(int *array, int i, int p)
{
	int tmp;

	if (array[i] != array[p])
	{
		tmp = array[i];
		array[i] = array[p];
		array[i] = tmp;
	}
}

/**
 * partition - put a pivot
 * @array: variable
 * @size: variable
 * @low: varible
 * @high: variable
 * Return: 0
 */
void shell_sort(int *array, size_t size)
{
	size_t i, p, q = 0;

	if (size < 2)
	{
		return;
	}

	while (i <= size / 3)
	{
		i = i * 3 + 1;
	}

	while (i >= 1)
	{
		for (p = i; p < size; p++)
		{
			for (q = i; q >= i && array[q] < array[q - i]; q -= i)
			{
				_swap_(array, q, q - i);
			}
		}
		i /= 3;
		print_array(array, size);
	}
}
