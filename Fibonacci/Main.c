#include<stdio.h>

int main()
{
	int n = 0;
	int first = 1, second = 1, next = 0;

	// Prompt the user for the number of terms in the Fibonacci sequence
	printf("Enter the number of terms: ");
	scanf_s("%d", &n);

	printf("Fibonacci Series: %d %d ", first, second);

	// Generate Fibonacci sequence
	for (int i = 3; i <= n; i++) {
		next = first + second;
		printf("%d ", next);
		first = second;
		second = next;
	}
	return 0;
}