/*
 * lab_2.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Reem Salah Shehab
 */


#include<stdio.h>
void main()
{
	int n1,n2,n3,max=0;
	printf("Enter three values: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d%d",&n1,&n2,&n3);
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
	printf("The Largest value is %d",max);




}

