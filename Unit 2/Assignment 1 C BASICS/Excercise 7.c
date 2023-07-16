/*
 * main.c
 *  	created on: Jul 16, 2023
 *  	Author:		Ahmed Hesham
 */

#include<stdio.h>

void main()
{
	int i,n;
	unsigned long long int factorial=1;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);
	if(i<0)
		printf("ERROR!! Factorial of negative number doesn't exist");
	else
	{
		for(n=1;n<=i;++n)
		{
			factorial*=n;
		}
		printf("Factroial= %lu ",factorial);
	}
return 0;
}
