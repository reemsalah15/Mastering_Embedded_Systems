/*
 * Ex_7.c
 *
 *  Created on: Oct 1, 2022
 *      Author: Reem Salah Shehab
 */

#include <stdio.h>
void e()
{
	int n,fac=1;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	if(n>0) // First condition if an integer greater than 0
	{
		for(int i=1;i<=n;i++)
		{
			fac=fac*i;  // for example : if n = 5 --> 1*2*3*4*5=120 
		}
		printf("Factorial = %d ",fac);
	}
	
	else if(n == 0) // Second condition if an integer equal 0
		printf("Factorial = 0");

	else  	// Third condition if an integer smaller than 0
		printf("Error!!! Factorial of negative number doesn't exist.");
}



