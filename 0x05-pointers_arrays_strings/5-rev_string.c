#include "main.h"

/**
 * rev_string - printts strings
 *
 * @s: pointer to char
 *
 */


void rev_string(char *s)
{
	char *str;

	long unsigned int len, length, count;

	str = strdup(s);

	length = strlen(s) - 1;

	len = length;

	for (count = 0; count <= length; count++)
	{
		s[count] = str[len];

		len--;
	}
	

}

int main(void)
{
	    char s[10] = "My School";

	        printf("%s\n", s);
		    rev_string(s);
		        printf("%s\n", s);
			    return (0);
}
