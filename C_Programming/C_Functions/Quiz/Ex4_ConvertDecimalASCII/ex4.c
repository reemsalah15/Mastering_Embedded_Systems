/*
 * Convert a decimal number stored as an ASCII array to an unsigned integer
 *
 *  Created on: Feb 15, 2023
 *      Author: Reem Salah
 */

#include<stdio.h>
#include<string.h>
void convert_ASCII_INT(char s[]);
int main()
{
	char ascii[]="0123";
	convert_ASCII_INT(ascii);
	return 0;
}

void convert_ASCII_INT(char s[])
{
	int num=0;
	int size=strlen(s);
	for(int i=0;i<size;i++)
	{
		num = num*10 + (s[i]-48);

	}
	printf("%d",num);
}
