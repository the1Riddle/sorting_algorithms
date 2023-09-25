#include "sort.h"
/**
 * swap_elements - used to swap the elements in the array;
 * @a: the first element;
 * @b: the second element to be swapd with the other;
 *
 *
 */
void swap_elements(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * lomuto_partition - this partitions the function for quick sort
 * @array: the array
 * @low: the lower index
 * @hi: the higher index to be partitioned
 * @size: the size of the array
 *
 * return: 
 */
int lomuto_pertition(int *array, int low, int hi, size_t size)
{
	int pivot = array[hi];
	int x, y = (low - 1);

	for (x = low; x <= hi; x++)
	{
		if (array[x] <= pivot)
		{
			y++;
			if (y != x)
			{
				swap_elements(&array[y], &array[x]);
				print_array(array, size);
			}
		}
	}
	return (y);
}

/**
 * sort_lomuto - it sorts the array recursively
 * @array: the array
 * @low: the lowest value
 * @hi: the highest value
 * @size: the size of the array
 *
 *
 */
void sort_lomuto(int *array, int low, int hi, size_t size)
{
	int x;

	if (low < hi)
	{
		x = lomuto_pertition(array, low, hi, size);
		sort_lomuto(array, low, x - 1, size);
		sort_lomuto(array, x + 1, hi, size);
	}
}

/**
 * quick_sort - quick Sort using lomuto partition
 * @array: the array which will be sorted
 * @size: the size of the array
 *
 *
 */
void quick_sort(int *array, size_t size)
{
	sort_lomuto(array, 0, size - 1, size);
}
