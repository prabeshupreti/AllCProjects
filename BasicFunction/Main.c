#include<stdio.h>

int main() 
{
	int a = 5;
	int b = 6;

	int value;
	int add;

	value = f(7);
	add = sum(a, b);

	printf("%d", add);
}

int f(int x) 
{
	return x;
}

int sum(int a, int b) 
{
	return a + b;
}