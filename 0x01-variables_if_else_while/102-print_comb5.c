#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - Entry Point
  *Description: 'Tthis prints all possible combinations of 2 2-digit numbers'
  *Return: Always 0 (Successful)
  */
int main(void)
{
int n, m;
	for (n = 0; m <= 98; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(',');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			if (n == 98 && m == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
