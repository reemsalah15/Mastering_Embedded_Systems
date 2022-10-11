/*
 * Lab_3.c
 *
 *  Created on: Oct 7, 2022
 *      Author: Reem Salah Shehab
 */
/*
 * Calculate and print Transpose of 3x3 Matrix
 */

#include<stdio.h>
void main()
{
	float item[3][3];

	// Function: To enter items in the 3x3 matrix
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Enter the item(%d,%d) : ",i,j);
			fflush(stdin);
			fflush(stdout);

			scanf("%f",&item[i][j]);
		}

	}

	// Function: To Print items of the 3x3 matrix
	printf("The matrix is\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%0.2f\t",item[i][j]);
			fflush(stdin);
			fflush(stdout);
		}
		printf("\r\n");
	}

	// Function: To Print Transpose of the 3x3 matrix
	printf("The Transpose matrix is\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%0.2f\t",item[j][i]);
			fflush(stdin);
			fflush(stdout);
		}
		printf("\r\n");
	}
}
