#include "sort.h"

/**
 * selection_sort - sorts an array of ints in ascending order
 * @array: the array being sorted
 * @size: the size of the array
 *
 * Return: void.
**/
void selection_sort(int *array, size_t size)
{
size_t i, j, min;
for (i = 0; i < size - 1; i++)
{
min = i;
for (j = i + 1; j < size; j++)
if (array[j] < array[min])
min = j;
if (min != i)
{
integer_swap(&array[min], &array[i]);
print_array(array, size);
}
}
}

/**
 * integer_swap - Swaps integers
 * @fst : first integer
 * @snd : second integer
 *
**/
void integer_swap(int *fst, int *snd)
{
int temp = *fst;
*fst = *snd;
*snd = temp;
}
