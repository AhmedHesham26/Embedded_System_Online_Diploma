
/*
 * main.c
 *  	created on: Aug 17, 2023
 *  	Author:		Ahmed Hesham
 */

#include <stdio.h>
void reverseSentence();
int main() {
    printf("Enter a sentence: ");
    fflush(stdin);fflush(stdout);
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}

