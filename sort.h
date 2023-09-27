#ifndef SORT_H
#define SORT_H

#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

/****** that returns ints *******/
int lomuto_pertition(int *array, int low, int hi, size_t size);
void sort_lomuto(int *array, int low, int hi, size_t size);

/*** used to swap the nodes ***/
listint_t *swap_node(listint_t *node, listint_t **list);
void swap_elements(int *a, int *b);

#endif
