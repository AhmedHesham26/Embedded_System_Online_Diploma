/*
 * main.c
 *  	created on: Jul 22, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>

int main()
{
	int a[10][10] ,b[10][10],r,c,i,j;
	printf("Enter rows and columns of matrix :");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&r,&c);
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j){

			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&a[i][j]);
		}
		}
	printf("Entered matrix: \n");
	for (i=0; i<r;++i)
	{
		for(j=0;j<c;++j){
			printf("%d ",a[i][j]);

			if(j==c-1)
				printf("\n\n");
		}
	}
	printf("Transpose matrix: \n");
	for (i=0; i<r;++i)
			{
				for(j=0;j<c;++j){
					b[j][i]=a[i][j];
				}
			}
	for (i=0; i<c;++i)
		{
			for(j=0;j<r;++j){
				printf("%d ",b[i][j]);

				if(j==r-1)
					printf("\n\n");
			}
		}
}
