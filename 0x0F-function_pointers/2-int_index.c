/**
 * int_index - prints a name.
 * @array: - array
 * @size: - size of string
 * @cmp: - function compare
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
