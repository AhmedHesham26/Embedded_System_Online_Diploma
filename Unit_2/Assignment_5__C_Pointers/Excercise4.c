/*
 * Excercise4.c
 *
 * Created On: Oct 27, 2023
 *      Author: Ahmed Hesham
 */
#include "stdio.h"
#include "string.h"
int main()
{
	int num,i;
	int arr[15];
	int* ptr;
	printf("Input the number of elements to store in the array (max 15) :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("Input %d numbers of elements in the array :\n",num);
	for(i=1;i<=num;i++){
		printf("Element[%d]: ",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	ptr=arr;
	for(i=1;i<=num;i++){
		*ptr=arr[i];
		ptr++;
	}
	ptr=&arr[num-1];
	printf("The elements of array in reverse order are :\n");
	for(i=num;i>0;i--){
		printf("Element[%d]: %d",i,*ptr);
		ptr--;
		printf("\n");
	}

}
