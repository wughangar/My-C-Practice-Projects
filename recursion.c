#include <stdio.h>
/**
 * computes factorila using recursion
 */

long int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
int main()
{
	int n;

	while (1)
	{
		printf("Enter a positive number: ");
		scanf("%d", &n);

		if (n < 0)
		{
		printf("Error: input should be a positive number.\n");
		}
		else if (n == 0)
		{
			break;
		}
		else
		{
			printf("!%d = %ld\n", n, factorial(n));
		}
	}
		printf("Exiting program.\n");
		return (0);
}
