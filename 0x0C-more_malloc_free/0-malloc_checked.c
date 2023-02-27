#include "main.h"
/**
 *malloc_checked - checkout Mr. Malloc himself
 *@b: this poor b is only allowed to be positive
 *Return: return back to the void demon
 */

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p)
{
return (p);
}
exit(98);
}
