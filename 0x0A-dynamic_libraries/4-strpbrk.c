#include "main.h"

/**
 * _strpbrk - stop the barking im napping 
 * @s: ssssssssss (like shrek?)
 * @accept: plz im sorry forgive ill be good 
 * return: Return a char if you dont mind 
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
			return (s + i);
			}
		}
	}
return (0);
}
