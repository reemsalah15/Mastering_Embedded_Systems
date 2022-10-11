/*
 * String_Ex1.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Reem Salah Shehab
 */


/*
 * Ex1:C Program to find the frequency of characters in a string
*/

#include<stdio.h>
#include<string.h>
void main()
{
	int counter=0,i=0;
	char text[100],char_f;

	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(text);

	printf("Enter a character to find frequency : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&char_f);
//Function: Find frequency of a character
	while(text[i]!=0)
	{
		if(char_f==text[i]) 
		{
			counter++;
		}
		i++;
	}
	printf("Frequency of %c = %d",char_f,counter);

}
