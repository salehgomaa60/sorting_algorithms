#include "sort.h"

/**
 * selection_sort - sorts an array of integers in
 * ascending order using the Selection sort
 * @array: input array
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, x;

	for (i = 0; i < size; i++)
	{
		x = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[x] > array[j])
				x = j;
		}

		if (i != x)
		{
			tmp = array[i];
			array[i] = array[x];
			array[x] = tmp;
			print_array(array, size);
		}
	}
}
