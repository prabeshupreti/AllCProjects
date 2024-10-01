#include<stdio.h>

int main()
{
	int choice, a, b;
	printf("Select an operation you want to perform:\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("Enter your choice: ");
	scanf_s("%d", &choice);
	printf("\n");
	
	printf("Enter two numbers: ");
	scanf_s("%d%d", &a, &b);

	switch (choice)
	{
		case 1:
			printf("The sum is %d.", a + b);
			break;

		case 2:
			printf("The subtraction is %d.", a - b);
			break;

		case 3:
			printf("The multiplication is %d.", a * b);
			break;

		case 4:
			printf("The division is %f.", (float) a/b);
			break;

		default:
			printf("We didn't provide you that option.");
			break;
	}

	return 0;
}