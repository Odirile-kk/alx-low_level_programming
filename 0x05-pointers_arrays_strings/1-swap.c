#include main.h 

/**
 *  @a: integer 1
 *  @b: integer 2
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
