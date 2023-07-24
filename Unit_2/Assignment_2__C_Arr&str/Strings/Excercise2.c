/*
 * main.c
 *  	created on: Jul 22, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char a[2000];
	int length;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(a);

	length=strlen(a);
	printf("Length of string: %d" ,length);
return 0;
}

