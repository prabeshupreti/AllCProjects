#include<stdio.h>

int main() 
{
	int a, b, c, d;

	printf("Enter all 4 numbers sequentially:\n");
	int x = scanf_s("%d%d%d%d", &a, &b, &c, &d);

	if ((a > b && a > c && a > d) || (b > a && b > c && b > d)) 
	{
		if (a > b) 
		{
			printf("%d is greater than %d, %d and %d.", a, b, c, d);
		}
		else 
		{
			printf("%d is greater than %d, %d and %d.", b, a, c, d);
		}
	}
	else 
	{
		if (c > d) 
		{
			printf("%d is greater than %d, %d and %d.", c, a, b, d);
		}
		else
		{
			printf("%d is greater than %d, %d and %d.", d, a, b, c);
		}
	}	
	return 0;
}