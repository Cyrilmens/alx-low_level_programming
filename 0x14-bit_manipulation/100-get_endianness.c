#include "main.h"

/**
 * get_endianness - confirms if a machine is lil or big endian
 * Return: 0 for big, 1 for lil
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
