#include "main.h"
#include <stdlib.h>

/**
 * create_array -
 * @size: size of array
 * @c: char to assign
 * Description:
 * Return:
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb *size); i++)
	{
		*((char *)(p) + i) = 0; 
	}
	return (p);
}
