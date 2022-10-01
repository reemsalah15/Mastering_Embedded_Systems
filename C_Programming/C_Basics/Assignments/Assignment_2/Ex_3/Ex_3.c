/*
 * Ex_3.c
 *
 *  Created on: Oct 1, 2022
 *      Author: Reem Salah Shehab
 */


#include<stdio.h>
void main()
{
	float n1,n2,n3,max;
	printf("Enter three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f%f",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
	{
		max=n1;
	}
	else if (n2>n1 && n2>n3)
	{
		max=n2;
	}
	else
	{
		max=n3;
	}
	printf("Largest number = %0.2f",max);
}



