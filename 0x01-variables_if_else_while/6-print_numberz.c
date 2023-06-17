#include <stdio.h>
/**
  *main - Entry Point
  *Description: 'This prints base 10 numbers using putchar'
  *Return: Always 0 (Successful)
  */
int main(void)
{
int n;
	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
