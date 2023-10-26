/*
 * Excercise3.c
 *
 * Created On: Oct 27, 2023
 *      Author: Ahmed Hesham
 */
#include "stdio.h"
#include "string.h"
int main()
{
	int i,len;
	char str[100];
	char* ptr;
	printf("Input a string: ");
	fflush(stdin);fflush(stdout);
	gets(str);
	ptr=str;
	len=strlen(str);
	ptr=str;
	for(i=0;i<len-1;i++)
	{
		*ptr=str[i];
		ptr++;
	}
	printf("the reverse of the string: ");
	for(i=0;i<len+1;i++)
	{
		printf("%c",*ptr);
		ptr--;
	}



}
