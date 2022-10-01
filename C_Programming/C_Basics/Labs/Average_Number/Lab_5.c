/*
 * Lab_5.c
 *
 *  Created on: Oct 1, 2022
 *      Author: Reem Salah Shehab
 */


#include <stdio.h>
void main()
{
	int degree;
	float sum=0.0,average;
	int n;
	printf("Enter the number of student: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		printf("Enter student (%d) degree:",i);
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&degree);
		sum=sum+degree;
	}
		average=sum/n;

	printf("Average students degree is : %f ",average);
}
