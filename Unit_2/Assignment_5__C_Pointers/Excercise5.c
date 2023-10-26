/*
 * Excercise5.c
 *
 * Created On: Oct 27, 2023
 *      Author: Ahmed Hesham
 */
#include "stdio.h"
#include "string.h"

struct data
{
	char name[50];
	int ID;
};

struct data employee={"Ahmed",225};
int main()
{
	struct data* ptr;
	ptr=&employee;
	printf("Employee name: %s\nEmployee ID: %d",ptr->name,ptr->ID);
}
