#include<stdio.h>

int main()
{
	int number = 0;
	int reversedNumber = 0;
	int originalNumber = 0;

	printf("Enter the numbers: ");
	scanf_s("%d", &number);

	originalNumber = number;

	while (number != 0)
	{
		int temp = number % 10;
		reversedNumber = reversedNumber * 10 + temp;
		number = number / 10;
	}

	if (originalNumber == reversedNumber)
	{
		printf("The number is palindrome.");
	}
	else
	{
		printf("The number is not palindrome.");
	}

	return 0;
}