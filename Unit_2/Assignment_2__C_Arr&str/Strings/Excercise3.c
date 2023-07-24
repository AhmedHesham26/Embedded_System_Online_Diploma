/*
 * main.c
 *  	created on: Jul 22, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char c[1000],temp;
	int i,j=0;
	printf("Enter the string: ");
	fflush(stdin);fflush(stdout);
	gets(c);

i=0;
j=strlen(c)-1;
while(i<j)
	{
	temp=c[i];
	c[i]=c[j];
	c[j]=temp;
	i++;
	j--;
	}

printf("The reverse string is : %s ",c);
;
}
