#include <stdio.h>
/**
  *main - Entry Point
  *Description: 'This prints lowercase and uppercase alphabets'
  *Return: Always 0 (Successful)
  */
int main(void)
{
int n = 97;
int m = 65;
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}

