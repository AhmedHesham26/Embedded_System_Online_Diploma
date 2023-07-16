/*
 * main.c
 *
 * Created On: Jul 16, 2023
 *      Author: Ahmed Hesham
 */

#include"stdio.h"

void main()
{
	int i;
	printf("Enter an integer you to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);
	if(i%2==0){
	printf(" %d is even " ,i);
	}
	else 
	{
	printf("%d is odd" ,i);
	}
return 0;	
}
