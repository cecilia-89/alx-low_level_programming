/**
 * int_index - returns index if element matches
 *
 * @array: pointer to an array of int type
 * @cmp: pointer to function
 * @size: size of array
 *
 * Return: either -1 or index
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	int i;

	if (size != NULL && array != NULL && cmp != NULL)
	{

		for (i = 0; i < size; i++)
		{
			int value;

			value = (cmp)(array[i]);

			if (value)
				return (i);
		}

	}

	return (-1);

}
