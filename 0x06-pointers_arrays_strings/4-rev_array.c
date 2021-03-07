/**
 * reverse_array - reverse array of integers
 *
 * @a: array of integers
 * @n: number of elements in array
 *
 */

void revers_array(int *a, int n)
{

	int temp, i, j;

	for (i = (n - 1), j = 0; j < i; j++, i--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

}
