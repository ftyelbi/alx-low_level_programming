#include <stdio.h>
/**
  *main - Entry Point
  *Decription: 'This prints number combinations'
  *Return: Always 0 (Succesful)
  */
int main(void)
{
int n;
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
