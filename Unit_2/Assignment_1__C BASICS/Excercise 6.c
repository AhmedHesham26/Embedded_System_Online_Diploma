/*
 * main.c
 *  	created on: Jul 16, 2023
 *  	Author:		Ahmed Hesham
 */

#include<stdio.h>

void main()
{
	int i,n,sum=0;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);
for(n=1;n<=i;n++)
{
	sum+=n;

}
printf("Sum= %d", sum);
}
