/*
 * main.c
 *  	created on: Jul 16, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>

void main()
{
	char alpha;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &alpha);
	if((alpha>= 'a' && alpha <='z')|| (alpha>='A' && alpha<='Z'))
	{
		printf(" %c is an alphabet", alpha);
	}
	else
		printf(" %c is not alphabet" , alpha);



}
