/*
 * Lab_1.c
 *
 *  Created on: Oct 6, 2022
 *      Author: Reem Salah Shehab
 */

// Lab_1: C program to enter degrees of students and print it 

#include<stdio.h>
void main()
{
	float degrees[10];
	for(int i=0;i<10;i++)
	{
		printf("Enter student %d degree : ",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&degrees[i]);
	}

	for(int i=0;i<10;i++)
    {
		printf("\nStudent %d degree is %f ",i+1,degrees[i]);
		fflush(stdin);
		fflush(stdout);
	}
}
