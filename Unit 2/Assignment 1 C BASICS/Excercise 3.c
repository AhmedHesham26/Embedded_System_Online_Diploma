/*
 * main.c
 *  	created on: Jul 16, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>

void main()
{
	float a,b,c;
	printf("Enter three numbers: \r\n");
fflush(stdin);fflush(stdout);
scanf("%f %f %f", &a,&b,&c);
if(a>=b&&a>=c)
{

		printf("The largest number is %f",a);

}
if(b>=c && b>=a)
{
	printf("The largest number is %f",b);
}
if(c>=a && c>=b)
{
	printf("The largest number is %f",c);
}

}
