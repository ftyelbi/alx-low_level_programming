#include <stdio.h>
/**
  *main - Entry point
  *Description: 'This program prints lowercase alphabets'
  *Return: Always 0 (Successful)
  */
int main(void)
{
int n = 97;
	while (n <= 122)
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
