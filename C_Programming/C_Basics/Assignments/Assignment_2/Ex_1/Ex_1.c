/*
 * Ex_1.c
 *
 *  Created on: Oct 1, 2022
 *      Author: Reem Salah Shehab
 */

#include<stdio.h>
void main()
{
	int n;
	printf("Enter an integer you want to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	if(n % 2 == 0)
		printf("%d is even.",n);
	else if(n % 2 != 0)
		printf("%d is odd.",n);

}
