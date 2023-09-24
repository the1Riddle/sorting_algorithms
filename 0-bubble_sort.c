#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: the arrey to be sorted
 * @size: the size
 *
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int num;

	if (!array || size < 2)
		return;
	for (y = 0; y < size - 1; y++)
	{
		for (x = 0; x < size - y - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				num = array[x];
				array[x] = array[x + 1];
				array[x + 1] = num;
				print_array(array, size);
			}
		}
	}
}
