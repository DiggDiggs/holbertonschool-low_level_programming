/**
 * print_alphabet - does something
 * Return: void
 */
#include"main.h"
void print_alphabet(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		_putchar(ab % 10) + '0');
	}
	_putchar('\n');
}
