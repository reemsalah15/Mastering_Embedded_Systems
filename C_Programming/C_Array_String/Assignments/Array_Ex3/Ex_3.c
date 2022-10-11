/*
 * Ex_3.c
 *
 *  Created on: Oct 10, 2022
 *      Author: Reem Salah Shehab
 */


/*
 * EX3: C Program to find Transpose of Matrix
 */

#include<stdio.h>
void main()
{
	int r,c;
	printf("Enter rows and column of matrix: ");
	
	fflush(stdin);
	fflush(stdout);

	scanf("%d %d",&r,&c);

	int arr[r][c];

	// Function: To enter items in the 3x3 matrix
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);

			scanf("%d",&arr[i][j]);
		}

	}

	// Function: To Print items of the 3x3 matrix
	printf("The matrix is\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t",arr[i][j]);
			fflush(stdin);
			fflush(stdout);
		}
		printf("\r\n");
	}

	// Function: To Print Transpose of the 3x3 matrix
	printf("The Transpose matrix is\n");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d\t",arr[j][i]);
			fflush(stdin);
			fflush(stdout);
		}
		printf("\r\n");
	}
}
