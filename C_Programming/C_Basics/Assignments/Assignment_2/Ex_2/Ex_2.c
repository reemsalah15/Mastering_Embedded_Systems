/*
 * Ex_2.c
 *
 *  Created on: Oct 1, 2022
 *      Author: Reem Salah Shehab
 */


#include<stdio.h>
void main()
{
	char c;
	printf("Enter an alphabet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&c);
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
		printf("%c is a vowel.",c);
	else
		printf("%c is a consonant.",c);

}
