#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet
 */
#include"main.h"
void print_alphabet_x10(void)
{
	char ab = 'a';

	int i;

	for (i = 0; i < 10; i++)
	{
		while (ab <= 'z')
		{
			_putchar(ab);
			ab++;
		}
	ab = 'a';
	_putchar('\n');
	}
}
