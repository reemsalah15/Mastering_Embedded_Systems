/*
 * Ex1.c
 *
 *  Created on: Oct 28, 2022
 *      Author: Reem Salah Shehab
 */


// EX_1: Prime numbers between two intervals by making user-defined function  

#include<stdio.h>

void PrimeNum(int n);

void main(void)
{
	int a,b,count=0;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d",&a,&b);

	printf("Prime numbers between %d and %d are: ",a,b);
	for(int i=a;i<b;i++)
	{
		PrimeNum(i);
	}

}

void PrimeNum(int n)
{
	int temp=0;
	for(int i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				temp++;
				break;
			}
		}
	if(temp==0 && n!=1)
	{
		printf("%d ",n);
	}

}