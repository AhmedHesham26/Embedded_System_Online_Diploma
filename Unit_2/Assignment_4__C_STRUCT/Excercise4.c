/*
 * Excercise4.c
 *
 * Created On: Oct 20, 2023
 *      Author: Ahmed Hesham
 */
#include "stdio.h"
struct student{
	char name[50];
	int roll;
	float marks;
};

int main(){
	struct student s[10];
	int i;
	for(i=1;i<11;i++)
	{
	s[i].roll=i;
	printf("\nEnter the information of student %d: \n",s[i].roll);

	printf("Enter the name: \n");
	fflush(stdin);fflush(stdout);
	scanf("%s",s[i].name);
	printf("Enter the marks: \n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s[i].marks);
	}

	printf("\nDisplaying information\n");
	for(i=1;i<11;i++)
	{
		printf("Information of roll number %d\n",s[i].roll);
		printf(" Name:%s\n Marks:%.2f \n",s[i].name,s[i].marks);
	}
}
