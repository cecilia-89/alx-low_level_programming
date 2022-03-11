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

	do
       	{
	if (i == 101 || i == 113)
	{
	continue;
	}

	else
	{
	putchar(i);
	i++; }
	} while (i < 122);
	return (0);
}
