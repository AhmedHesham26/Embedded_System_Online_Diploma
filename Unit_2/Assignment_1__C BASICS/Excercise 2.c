/*
 * main.c
 *  	created on: Jul 16, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>

void main()
{
	char alpha;
	printf("Enter an alphabet: " );
	fflush(stdin);fflush(stdout);
	scanf("%c", &alpha);
	if (alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
	{
		printf(" %c is a vowel" , alpha);

	}
	else
	{
		printf("%c is a consonant ", alpha);
	}
}
