/*
 * main.c
 *  	created on: Jul 21, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>

int main()
{
	int i,n;
	float num,sum,average;
	printf("Enter Maximum inputs: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter n%d: " ,i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&num);
		if(num<0.0)
	break;
		sum+=num;
	}


average=sum/i-1;
printf("average is %.2f",average);

return 0;
}
