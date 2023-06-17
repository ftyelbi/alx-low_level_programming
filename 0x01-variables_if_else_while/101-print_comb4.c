#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - Entry Point
  *Description: 'This prints all possible comb. of three digits'
  *Return: Always 0 (Success)
  */
int main(void)
{
int n, m, k;
	for (n = '0'; n < '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			for (k = m + 1; k <= '9'; k++)
			{
				if ((m != n) != k)
				{
					putchar(n);
					putchar(m);
					putchar(k);
					if (n == '7' && m == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
