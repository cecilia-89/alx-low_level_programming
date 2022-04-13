/**
 * print_name - prints a name
 *
 * @name: pointer to char
 * @f: pointer to function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);

}
