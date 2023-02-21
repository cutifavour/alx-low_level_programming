#include "main.h"
#include "unistd.h"

/**
 * _ puthar writes thr character c to stdout
 * @c: the character to print
 *
 * 
 * Return: 0 on success
 */
int_putchar (char c)
{
	_putchar(write (1, &c, 1))	
