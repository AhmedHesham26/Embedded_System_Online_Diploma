/*
 * main.c
 *  	created on: Jul 22, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>

int main()
{
	int a[30];
	int n,i,value,position;

	printf("Enter no of elements:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\n Enter %d elements : " ,n);
	fflush(stdin);fflush(stdout);
	scanf("%d",&a[i]);
}

printf("\n Enter the element to be inserted: ");
fflush(stdin);fflush(stdout);
scanf("%d",&value);

printf("\n Enter the position: ");
fflush(stdin);fflush(stdout);
scanf("%d",&position);

for(i=n;i<=position;i--)
{
	a[i]= a[i-1];
	//a[position-1]= value;
}
n++;
a[position-1]= value;
for(i=0;i<n;i++)
{
	printf(" %d ",a[i]);
}

}


