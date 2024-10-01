#include<stdio.h>

int f;

int main() 
{
	int a;
	printf("Enter a number: ");
	scanf_s("%d", &a);
	printf("%p\n", &a);
	printf("The number you entered is %d.", a);
}
