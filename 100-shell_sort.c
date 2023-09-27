#include "sort.h"

/**
 * shell_sort - the entry poin
 * @array: the array to be sorted
 * @size:the size of the array
 *
 * Description: a function that sorts an array of integers in ascending order
 * using the Shell sort algorithm
 *
 *
 */
void shell_sort(int *array, size_t size)
{
	size_t y, x, gap = 1;
	int value;

	while (gap <= size / 3)
	{
		gap = gap * 3 + 1;
	}

	while (gap > 0)
	{
		for (x = gap; x < size; x++)
		{
			value = array[x];
			y = x;

			while (y >= gap && array[y - gap] > value)
			{
				array[y] = array[y - gap];
				y -= gap;
			}

			array[y] = value;
		}
		print_array(array, size);
		/* alculate the next gap using the Knuth sequence */
		gap = (gap - 1) / 3;
	}
}
