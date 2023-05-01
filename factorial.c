#include <stdio.h>
/**
 * c program to find a factoril of a number 
 */

int main()
{
	int i;
	int num;
	long int fact;

	while (1)
	{
		printf("Enter an integer number (or 0 to exit the program): ");
		scanf("%d", &num);

		if (num == 0)
		{
			break;
		}

		fact = 1;

		for (i = num; i >= 1; i--)
		{
			fact = fact * i;
		}
		printf("the factorial of %d id %ld.\n\n", num, fact);
	}
	printf("Exiting the program\n");
	return (0);
}
