#include "sort.h"

/**
 * _swap_ - It will swap two values
 * @i: variable
 * @p: variable
 * @array: varriable
 * Return: 0
 */
void _swap_(int *array, int i, int p)
{
	int tmp;

	if (array[i] != array[p])
	{
		tmp = array[i];
		array[i] = array[p];
		array[p] = tmp;
	}
}

/**
 * shell_sort - Will sort a list
 * @array: variable
 * @size: variable
 * Return: 0
 */
void shell_sort(int *array, size_t size)
{
	size_t i = 0, p, q;

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
			for (q = p; q >= i && array[q] < array[q - i]; q -= i)
			{
				_swap_(array, q, q - i);
			}
		}
		i /= 3;
		print_array(array, size);
	}
}
