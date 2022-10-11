/*
 * String_Ex3.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Reem Salah Shehab
 */

// C Program to reverse string without sung library function
#include<stdio.h>

void main()
{
	int len=0;
	char string[100];

	printf("Enter the string  : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%s",&string);

		while(string[len]!=0)
		{
			len++;
		}

	printf("Reverse string is : ");
	for(int j=len-1;j>=0;j--)
	{
		printf("%c",string[j]);
	}


}

