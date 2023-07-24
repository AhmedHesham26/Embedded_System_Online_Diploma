/*
 * main.c
 *  	created on: Jul 22, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>

int main()
{
	int a[100],n,i,element;

	printf("Enter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		fflush(stdin);fflush(stdout);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}

	printf("\nEnter the element to be searched: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element);

	for(i=0;i<n;i++)
			{
				if(a[i]==element)
				{
					printf("Element found at location: %d ",i+1);
					return 0;
				}

			}
	printf("Not found");
	return 1;
}


