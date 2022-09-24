/**
 * swap_int - Does nothing with void as arg
 * @a: pointer
 * @b: pointer
 * Description: Does nothing with void as arg
 * Return: on success print caractere 1.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

