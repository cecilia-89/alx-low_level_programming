#include "main.h"
#include <stdio.h>

/**
 * _abs - returns ansolute value
 *
 * @c: interger
 *
 * Return: always positive
 *
 */

int _abs(int c)
{
	if (c < 0)
	{
		c *= -1;

		return (c);
	}
	else
	{
		return (c);
	}

}

int main(void)
{
	    int r;

	        r = _abs(-1);
		    printf("%d\n", r);
		        r = _abs(0);
			    printf("%d\n", r);
			        r = _abs(1);
				    printf("%d\n", r);
				        r = _abs(-98);
					    printf("%d\n", r);
					        return (0);
}
