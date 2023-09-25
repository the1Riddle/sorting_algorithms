#include <stdio.h>

void selection_sort(int *array, size_t size)
{
	for (i = 0; i < 7; i++) 
	{
        min = i;
        for (j = i + 1; j < 8; j++)
	{
            if (array[j] < array[min]) 
	    {
                min = j;
            }
        }
        if (min != i) {
            temp = array[min];
            array[min] = array[i];
            array[i] = temp;

            printf("Swapped array[%d] %d and array[%d] %d\n", i, array[i], min, array[min]);
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", array[i]);
    }

    return (0);
}
