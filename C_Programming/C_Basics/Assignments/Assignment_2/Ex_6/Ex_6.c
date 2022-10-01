/*
 * Ex_6.c
 *
 *  Created on: Oct 1, 2022
 *      Author: Reem Salah Shehab
 */

#include <stdio.h>
void main()
{
	int n,sum=0;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}


	printf("Sum = %d ",sum);
}


