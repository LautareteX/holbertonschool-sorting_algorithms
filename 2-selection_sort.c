#include "sort.h"

void
swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void
selection_sort(int *array, size_t size)
{
		size_t iterator, min_i, step;

		if (array)
		{
		for (step = 0; step < size - 1; step++)
		{
			min_i = step;
			for (iterator = step + 1; iterator < size; iterator++)
			{
				if (array[iterator] < array[min_i])
					min_i = iterator;
			}
			if (array[min_i] != array[step])
			{
			swap(&array[min_i], &array[step]);
			print_array(array, size);
			}
			else
			{
				print_array(array, size);
				exit(0);
			}
		}
		}
		else
		{
			exit(0);
		}
}

