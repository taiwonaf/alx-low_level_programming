#include <stdio.h>

/**
 * main
 *Description: Write a program that prints the alphabet in lowercase, followed by a new line.
 *Return: Always (Success)
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
