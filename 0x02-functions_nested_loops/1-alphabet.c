/**
 * main - a..z
 * Return: returns 0
 */
#include"main.h"
int main (void)
{
	int abc[28] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\n' };
	int i = 0;
	while (i < 27)
	{
		putchar(abc[i]);
		i++;
	}
	return (0);
}
