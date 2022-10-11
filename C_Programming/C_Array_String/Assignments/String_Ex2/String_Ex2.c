/*
 * String_Ex2.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Reem Salah Shehab
 */

/*
 * Ex2:C Program to find the length of a string
 */

#include<stdio.h>

void main()
{
	int len=0;
	char string[100];

	printf("Enter a string: ");

	fflush(stdin);
	fflush(stdout);

	//	gets(string);
	scanf("%s",&string);


	while( string[len] != 0 )
	{
		len++;
	}


	printf("Length of string : %d",len);


}

