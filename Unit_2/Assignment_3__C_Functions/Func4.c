/*
 * main.c
 *  	created on: Aug 17, 2023
 *  	Author:		Ahmed Hesham
 */


/*
 * main.c
 *  	created on: Aug 17, 2023
 *  	Author:		Ahmed Hesham
 */



#include <stdio.h>
#include <math.h>

int sqr(int num ,int power);
int main(){

	int num,a,power;
	printf("Enter the base number: " );
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("Enter the power number: " );
		fflush(stdin);fflush(stdout);
		scanf("%d",&power);
	a=sqr(num,power);
	printf("\n the result is %d ",a);

	return 0;
}

int sqr(int num,int power)
{
return pow(num,power);
}
