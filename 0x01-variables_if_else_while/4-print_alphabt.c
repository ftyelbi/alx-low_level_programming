#include <stdio.h>
/**
  *main - Entry Point
  *Description: 'This prints alphabets apart from q and e'
  *Return: Always 0 (Successful)
  */
int main(void)
{
int n = 97;
	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

