#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 *
 */

int main(void)
{
	int i;
	int x;
       
	i= 97;

	while (i <= 122)
	{
	putchar(i);
	i++; }

	x = 65;

	while (x <= 90)
	{
	putchar(x);
	x++; }

	putchar('\n');

	return (0);
}
