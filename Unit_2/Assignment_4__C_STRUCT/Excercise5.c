/*
 * Excercise5.c
 *
 * Created On: Oct 20, 2023
 *      Author: Ahmed Hesham
 */
#include "stdio.h"
#define PI 3.1415
#define area(r) (PI*(r)*(r))

int main(){
	int radius;
	float area;

	printf("Enter the radius:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&radius);

	area=area(radius);
	printf("the area is %.2f",area);
}
