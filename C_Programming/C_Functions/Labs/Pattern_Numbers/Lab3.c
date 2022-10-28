/*
 * Lab3.c
 *
 *  Created on: Oct 25, 2022
 *      Author: Reem Salah Shehab
 */

// Lab3: Make pattern of numbers in shape of triangle

#include<stdio.h>

void patternNum(int i,int j);

void main()
{
	int x=0,y=0;
	patternNum(x,y);
}

void patternNum(int i,int j)
{
	for(i = 0; i <= 9; i++)
	{
		for(j = i; j <= 9; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
