#include <stdio.h>
/**
 * main - Entry point
 * Description:  a program that prints the alphabet in lowercase
 * Return: Alwaays 0 (success)
 */
int main(void)
{
	char i;
	{
		for (i = 'a' ; i <= 'z' ; i++)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
