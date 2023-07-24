/*
 * main.c
 *  	created on: Jul 21, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>

int main()
{

	int i,product,n;
	for (i=1 , product=1;i<=4;i++)
	{
		printf("Enter num%d: ",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&n);
		if(n==0)
			continue;
		product*=n;
	}

	printf("Product is %d", product);
}
