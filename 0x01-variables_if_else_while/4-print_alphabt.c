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

	i = 97;

	while (i <= 122)
	{
	if (i == 101 || i == 113)
	continue;
	else
	{
	putchar(i);
	i++; }
	}
	return (0);
}
