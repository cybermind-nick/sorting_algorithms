#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - Implementation of bubble_sort
 * @array: array of ints to be sorted
 * @size: size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	/* declare variables */
	int tmp, i, j;
	int iter;

	if (!array)
	{
		exit(0);
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[i])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;

				printf("Array: ");
				for (iter = 0; iter < size; iter++)
				{
					printf("%d ", array[iter]);
				}
				printf("\n");
			}
		}
	}

}
