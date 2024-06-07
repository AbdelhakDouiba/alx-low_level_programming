#include <stdio.h>
#include <stdlib.h>
 int is_palindorme(int n);

int main()
{
	int i, j, large = 0;

	for (i = 999; i > 99; i--)
	{
		for(j = 999; j > 99; j--)
		{
			if (is_palindorme(i * j) == 0)
			{
				if (large < i *j)
					large = i * j;
			}
		}
	}
	printf("%d\n", large);
	return (0);
}
int is_palindorme(int n)
{
	int a = n, num = 0, ret;

	while(n)
	{
		num = (num * 10) + (n % 10);
		n /= 10;
	}
	if (num == a)
		return (0);
	return (1);
}
