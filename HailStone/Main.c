#include<stdio.h>

int main()
{
	int number;

	printf("Enter a number: ");
	scanf_s("%d", &number);

	printf("%d", number);

	do
	{
		if (number % 2 != 0)
		{
			number = 3 * number + 1;
		}
		else
		{
			number = number / 2;
		}

		printf(", %d", number);

	} while (number != 1);

		return 0;
}