/**
 * @n - interger
 *
 * print_to_98 - prints n to 98
 *
 *
 */

void print_to_98(int n)
{
	int c;

	for ( c = n; c < 99; c++)
	{
		printf(c);
		putchar(',');
		putchar(' ');
	}
}
