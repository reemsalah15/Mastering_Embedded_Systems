/*
 * Ex_5.c
 *
 *  Created on: Oct 1, 2022
 *      Author: Reem Salah Shehab
 */

#include <stdio.h>
void main()
{
	char character;

	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&character);

	printf("ASCII value of %c = %d",character,character);
}


