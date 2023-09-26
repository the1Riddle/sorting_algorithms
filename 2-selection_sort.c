#include "sort.h"
/**
 * selection_sort - a function that perfoms a selection sort. 
 * @array: the array to be sorted.
 * @size: the size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int j, i, min, temp;
	for (i = 0; i < 9; i++) 
	{
		min = i;
		for (j = i + 1; j < 10; j++)
		{
			if (array[j] < array[min]) 
				min = j;
		}
		if (min != i) 
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}

}
