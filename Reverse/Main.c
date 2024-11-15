#include<stdio.h>

int main()
{
	int number = 0;
	int reversedNumber = 0;
	int originalNumber = 0;

	printf("Enter the numbers: ");
	scanf_s("%d", &number);

	{
		int originalNumber = number;

		while (number != 0)
		{
			int temp = number % 10;
			reversedNumber = reversedNumber * 10 + temp;
			number = number / 10;
		}
	}

	number = originalNumber;

	printf("The reverse of %d is %d.", number, reversedNumber);

	return 0;
}