/*
 * main.c
 *  	created on: Jul 22, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>

int main()
{
	float average,j[100],sum=0.0;
	int i,n;
	printf("Enter numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	while(n>100|| n<=0)
	{
		printf(" ERROR!! Number should be in range 1 to 100 \n");
		printf("Enter the number again: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&n);


	}

	for(i=1;i<=n;i++)
	{
		printf("%d. Enter number: ",i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&j[i]);
		sum+=j[i];
		average=sum/n;
	}
printf("average = %.2f",average);
}


///////////OR////////

/*int main()
{
	float average,j,sum;
	int i,n;
	printf("Enter numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d. Enter number: ",i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&j);
		sum+=j;
		average=sum/n;
	}
printf("average = %.2f",average);
} */
