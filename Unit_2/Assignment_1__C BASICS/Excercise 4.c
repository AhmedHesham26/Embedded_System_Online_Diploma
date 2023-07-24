/*
 * main.c
 *  	created on: Jul 16, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>

void main()
{
	float n;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&n);
if(n>0)
{
	printf(" %f is positive ",n);
}
if(n<0)
{
	printf(" %f is negative",n);
}
if(n==0)
{
	printf("you entered zero");
}
}
