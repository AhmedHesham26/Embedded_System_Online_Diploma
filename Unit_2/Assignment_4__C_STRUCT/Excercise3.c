/*
 * Excercise3.c
 *
 * Created On: Oct 20, 2023
 *      Author: Ahmed Hesham
 */
#include "stdio.h"
struct complex
{
	float m_r;
	float m_i;
};

struct complex read(char name[],char order[]){
	struct complex result;
	printf("Enter the %s complex no.: ",order);
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&result.m_r,&result.m_i);
	return result;
}
struct complex add(struct complex value1,struct complex value2){
	struct complex result;
	result.m_r=value1.m_r+value2.m_r;
	result.m_i=value1.m_i+value2.m_i;
	return result;
}

void printsum(char name[],struct complex result){
	printf("the sum is %.2f+j%.2f",result.m_r,result.m_i);
}
int main(){
	struct complex x,y,z;
	x=read("x","first");
	y=read("y","second");
	z=add(x,y);
	printsum("z",z);

return 0;
}

