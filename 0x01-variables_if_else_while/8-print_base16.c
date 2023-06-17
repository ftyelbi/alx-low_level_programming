#include <stdio.h>
/**
  *main - Entry Point
  *Description: 'This prints base 16 numbers'
  *Return: Always 0 (Succesful)
  */
int main(void)
{
int n;
int m;
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
