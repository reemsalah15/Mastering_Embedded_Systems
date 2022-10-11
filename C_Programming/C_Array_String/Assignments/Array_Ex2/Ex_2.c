/*
 * Ex_2.c
 *
 *  Created on: Oct 10, 2022
 *      Author: Reem Salah Shehab
 */

/*
 * EX2: C program to calculate average using arrays
 */

#include<stdio.h>

void main()
{

	int n,i;
	printf("Enter the numbers of data: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	float arr[n], sum=0.0, average;


	printf("Enter the elements of 1st matrix\n");

		for(i=0;i<n;i++)
		{
			printf("%d. Enter number: ",i+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&arr[i]);
			sum+=arr[i];
		}

	average=sum/n;
	printf("Average = %0.2f",average);

}



