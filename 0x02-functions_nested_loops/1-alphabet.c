#include <stdio.h>
/**
 * print_alphabet - Program to print alphabet in lowercase
 *
 * Return: return 0
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
