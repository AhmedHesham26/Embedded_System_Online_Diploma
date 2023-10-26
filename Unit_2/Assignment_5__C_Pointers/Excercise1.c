/*
 * Excercise1.c
 *
 * Created On: Oct 27, 2023
 *      Author: Ahmed Hesham
 */
#include "stdio.h"

int main()
{
	int m;
	int *ab;
	m=29;

	printf("Address of m: %p \nValue of m:%d\n\n",&m,m);
	ab=&m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab: %p \nContent of pointer ab:%d\n\n",ab,*ab);
	*ab=34;
	printf("The value of m assigned to 34 now\n");
	printf("Address of pointer ab: %p \nContent of pointer ab:%d\n\n",ab,*ab);
	*ab=7;
	printf("the pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m: %p \nValue of m:%d\n\n",&m,m);

}
