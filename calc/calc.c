#include <stdio.h>
#include <math.h>
#include <stdlin.h>
#include<conio.h>

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void factorial();

enum Options
{
	opt_1,
	opt_2,
	opt_3,
	opt_4,
	opt_5,
	opt_6,
	opt_7
};
 int main()
{
	int choice;

	while(options)
	{
		printf("1. Add A\n");
		printf("2. subtraction B\n");
		printf("3. Multiplications C\n");
		printf("4. division D\n");
		printf("5. modulus E\n");
		printf("6. power F\n");
		printf("7. factorial G\n");

		printf("\n");
                printf("Enter your choice (1-5): ");
		scanf("%d", &choice);

		if (choice > 7)
		{
			printf("Invalid choice");
		}

		if (choice == 1)
		{
			void addition()
		}

		if (choice == 2)
		{
			void subtraction()
		}

		if (choice == 3)
		{
			void multiplication()
		}

		if (choice == 4)
		{
			void division()
		}



void addition()
{
	int a, b, result = 0;

	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter a number: ");
	scanf("%d", &b);
	result = a + b;

	{
		printf("The answer is %d: \n", result);
	}
}
void subtraction()
{
	int a, b result = 0;

	printf("Enter a number: ");
        scanf("%d", &a);
        printf("Enter a number: ");
        scanf("%d", &b);
	result = a - b;
	{
		printf("The answer is %d: \n", result);
	}
}




void multiplication()
{
	int a, b, result = 0;
	 printf("Enter a number: ");
        scanf("%d", &a);
        printf("Enter a number: ");
        scanf("%d", &b);
	result = a * b;
	{
		 printf("The answer is %d: \n", result);
	}
}

void division()
{
	int a, b result = 0;

        printf("Enter a number: ");
        scanf("%d", &a);
        printf("Enter a number: ");
        scanf("%d", &b);
	result = a / b;

	{
		 printf("The answer is %d: \n", result);
	}
}
