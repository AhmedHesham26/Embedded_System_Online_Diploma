/*
 * Excercise2.c
 *
 * Created On: Oct 20, 2023
 *      Author: Ahmed Hesham
 */

#include "stdio.h"

struct distance
{
	int m_feet;
	float m_inch;
}input1,input2,sum;



int main(){

	printf("Enter information of first distance:  \n");
	printf("Enter in feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&input1.m_feet);

	printf("Enter in inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&input1.m_inch);

	printf("Enter information of second distance:  \n");
	printf("Enter in feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&input2.m_feet);

	printf("Enter in inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&input2.m_inch);


	sum.m_feet=input1.m_feet+input2.m_feet;
	sum.m_inch=input1.m_inch+input2.m_inch;

	printf("Sum of distances= %d' %.2f\"",sum.m_feet,sum.m_inch);


}
