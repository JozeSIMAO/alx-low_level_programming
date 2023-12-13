#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - earches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: is the value to search for
 *
 * Return: On success 0.
 * On error, -1 is returned
 */

int linear_search(int *array, size_t size, int value) {
    if (array == NULL)
        return -1;

    for (size_t i = 0; i < size; ++i) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}