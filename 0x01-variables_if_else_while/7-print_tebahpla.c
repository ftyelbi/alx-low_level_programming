#include <stdio.h>
/**
  *main - Entry point
  *Description: 'This prints alphabets in the reverse'
  *Return: Always 0 (Successful)
  */
int main(void)
{
int n = 122;
	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
