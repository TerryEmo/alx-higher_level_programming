#include <stdio.h>
#include <stdlib.h>
/**
 * Head - Starting Point
 *
 * Name: Making us of  putchar to output a-z.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');
	return (0);
}
