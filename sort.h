#ifndef _SORT_H_
#define _SORT_H_

#include <stdlib.h>
#include <stdio.h>

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

/*** Print functions ***/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/** Bubble Sort **/
void bubble_sort(int *array, size_t size);
void integer_swap(int *fst, int *snd);

/** Insertion sort **/
void insertion_sort_list(listint_t **list);

/** Selection sort **/
void selection_sort(int *array, size_t size);

/** Quick sort**/
void quick_sort(int *array, size_t size);
#endif