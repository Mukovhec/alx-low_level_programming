#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the lowercase alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
