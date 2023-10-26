/*
 * Excercise2.c
 *
 * Created On: Oct 27, 2023
 *      Author: Ahmed Hesham
 */
#include "stdio.h"


int main()
{
	int i;
	char alpha[27];
	char* ptr;
	ptr=alpha;

	for(i=0;i<26;i++){

		*ptr=i+'A';
		ptr++;

	}
	ptr=alpha;
	for(i=0;i<26;i++){
		printf("%c",*ptr);
		ptr++;
	}

/////////Another solution///////
	/*
		int i;
		char alpha[]={"abcdefghijklmnopqrstuvqxyz"};

		char* ptr;
		ptr=&alpha;
		for(i=0;i<=26;i++){
			printf("%c",alpha[i]);
			ptr++;
		}

*/
}

