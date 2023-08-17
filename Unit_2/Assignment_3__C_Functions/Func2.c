
/*
 * main.c
 *  	created on: Aug 17, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>

unsigned long long factorial(int n);

int main()
{
	int n;
	unsigned long long fact;
	printf("Enter the number to get its factorial: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	fact=factorial(n);
	printf("the factorial of %d is %u",n,fact);
	return 0;
}

unsigned long long factorial(int n){

	if(n==0)
		return 1;
	else
	return n*factorial(n-1);
}
