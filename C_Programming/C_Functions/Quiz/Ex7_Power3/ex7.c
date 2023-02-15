/*
 * C function to check if a given number is power of 3
 *
 *  Created on: Feb 15, 2023
 *      Author: Reem Salah
 */

#include<stdio.h>
#include<math.h>
int power_3(int n);
int main()
{
	int n,check;
	printf("Enter number to check: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&n);
	check=power_3(n);
	if(check==1)
		printf("%d ==> 0",n);
	else
		printf("%d ==> 1",n);
}

int power_3(int n)
{
	double check = log(n)/log(3);
	return check == trunc(check); //trunc returns the integer part of a number by removing any fractional digits.

}
