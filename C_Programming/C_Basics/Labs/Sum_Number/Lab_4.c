/*
 * Lab_4.c
 *
 *  Created on: Oct 1, 2022
 *      Author: Reem Salah Shehab
 */
/*
 * Function: Calculate the summation of values between 1 and 99
 */
#include <stdio.h>
void main()
{
	int sum=0;
	for(int i=1;i<=99;i++)
	{
		sum=sum+i;
	}


	printf("The summation of values between (1 and 99)is : %d ",sum);
}
