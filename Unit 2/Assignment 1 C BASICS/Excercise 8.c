/*
 * Excercise 8.c
 *  	created on: Jul 16, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>

void main()
{
	short o;
	float x,y;
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&o);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	switch(o)
	{
	case '+':
		printf("%.2f + %.2f = %.2f",x,y,x+y);
		break;
	case '-':
		printf("%.2f - %.2f = %.2f",x,y,x-y);
		break;
	case '*':
		printf("%.2f * %.2f = %.2f" ,x,y,x*y);
		break;
	case '/':
		printf("%.2f / %.2f = %.2f",x,y,x/y);
		break;
	default:

		printf("ERROR! Operator is not correct");
		break;
	}

}
