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
		size_t iterator, step;
		int *min_i;

		if (array)
		{
		for (step = 0; step < size - 1; step++)
		{
			min_i = array + step;
			for (iterator = step + 1; iterator < size; iterator++)
			{
				if (array[iterator] < *min_i)
					min_i = array + iterator;
				else
					continue;
			}

			if ((array + step) != min_i)
			{
				swap(array + step, min_i);
				print_array(array, size);
			}
		}
		}
		else
		{
			exit(0);
		}
}
