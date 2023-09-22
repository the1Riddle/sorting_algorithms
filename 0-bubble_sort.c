#include "sort.h"

void bubble_sort(int *array, size_t size)
{
        long unsigned int i;
	long unsigned int j;
	long unsigned int temp;
	long unsigned int k;
	for (i = 0; i < size; i++)
        {
                for (j = 0; j < (size -1); j++)
                {
                        if (array[j] > array[j + 1])
                        {
                                temp = array[j];
                                array[j] = array[j + 1];
                                array[j + 1] = temp;

                        }
                }

		printf("%lu\n", i + 1);
		for (k = 0; k < size; k++)
		{
			printf("%u, ", array[k]);
		}
	}

}
