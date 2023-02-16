/*
 * C Function to sum number between 1 and 100 without loop.
 *
 *  Created on: Feb 14, 2023
 *      Author: Reem Salah
 */
#include<stdio.h>

int sum(int n,int m);

int main()
{

printf("Sum = %d",sum(1,100));

	return 0;
}

int sum(int n,int m) //1 --> 5
{
	if(n<m)
		return m+sum(n,m-1);
	else
		return 1;
}
