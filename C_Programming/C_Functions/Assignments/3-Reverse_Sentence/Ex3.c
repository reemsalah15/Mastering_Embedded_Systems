/*
 * Ex3.c
 *
 *  Created on: Oct 28, 2022
 *      Author: Reem Salah Shehab
 */

// EX3: C program to reverse a sentence using recursion

#include<stdio.h>

void reverseString();

void main()
{

	printf("Enter a sentence: ");
	fflush(stdin);
	fflush(stdout);
	reverseString();

}

void reverseString()
{
	char s;
	scanf("%c",&s);
	if(s!='\n'){
		reverseString();
		printf("%c",s);
	}
}