/*
 * Excercise1.c
 *
 * Created On: Oct 20, 2023
 *      Author: Ahmed Hesham
 */
#include"stdio.h"

struct students
{
	char m_name[50];
	int m_roll;
	float m_marks;
}s;

int main(){



	printf("Enter the information of the students: \n");

	printf("Enter the name: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",s.m_name);
	printf("Enter the roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&s.m_roll);

	printf("Enter the marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s.m_marks);

	printf("\nDisplaying information\n");
	printf(" Name:%s\n RollNumber:%d\n Marks:%.2f",s.m_name,s.m_roll,s.m_marks);


}
