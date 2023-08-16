#include <stdio.h>
/**
 * main - Entry point
 * Description:  a program that prints the alphabet in lowercase and uppercase
 * Return: Alwaays 0 (success)
 */
int main(void)
{
	char i;
	{
		for (i = 'a' ; i <= 'z' ; i++)
			putchar(i);
		for (i = 'A' ; i <= 'Z' ; i++)
			putchar(i);
	}
	putchar('\n');
	return (0);
}

