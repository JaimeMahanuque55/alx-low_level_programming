#include <stdio.h>
/**
 * main - this is the entry of the program
 *
 * Return: return 0
 */
int main(void)
{
	char *pt = "_putchar";

	while (*pt)
	{
		putchar(*pt);
		pt++;
	}
	putchar('\n');

	return (0);
}
