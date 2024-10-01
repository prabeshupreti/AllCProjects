/*
The block of code below is based on new C
language version code and is considered to be safe
over the old C language version code.
The below code on function scanf_s works almost
like traditional scanf function but requires additional
parameter which is the size of a variable.
*/

#include<stdio.h>

int main()
{
	int a = 5;
	float b = a;

	float c = b / 2;

	printf("%f", c);
}