
/*
 * main.c
 *  	created on: Aug 17, 2023
 *  	Author:		Ahmed Hesham
 */


#include <stdio.h>

int isPrime(int num);

int main()
{
    int i;
	int start,end,n;
    printf("Enter the two intervals: ");
   fflush(stdin);fflush(stdout);
    scanf("%d %d",&start,&end);
    printf("the prime numbers are between %d & %d:",start,end);

    if(start<2)
    	start=2;
    for(i=start;i<=end;i++)
    {

    	n=isPrime(i);
    	if(n==1)
    		printf("\n %d",i);


    }
    return 0;
    }

int isPrime(int num)
{
	int j,n=1;
	for(j=2;j<=num/2;j++)
	{
		if(num%j==0){
			n=0;
			break;
		}
	return n;
}
}




