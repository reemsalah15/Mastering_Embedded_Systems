/*
 *  C program to return integer number of 4th least significant bit
 *
 *  Created on: Feb 15, 2023
 *      Author: Reem Salah
 */

#include<stdio.h>
int main()
{
	int bit,n,num;
	printf("Enter number in decimal form: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&n);
	for(bit=31; bit >= 0; bit--)
	{
		num=n>>bit;
		if(num&1)
			printf("1");
		else
			printf("0");
	}
	num=n>>3;
	if(num&1)
		printf("\n4th least significant bit is 1");
	else
		printf("\n4th least significant bit is 0");

	return 0;
}
