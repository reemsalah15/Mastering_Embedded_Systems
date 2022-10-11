/*
 * Ex_1.c
 *
 *  Created on: Oct 10, 2022
 *      Author: Reem Salah Shehab
 */

/*
 * Ex1: Example of multidimensional array in c
 */

#include<stdio.h>

void main()
{

// Enter the elements of 1st matrix  
	float arr1[2][2], arr2[2][2],sum[2][2] ;
	printf("Enter the elements of 1st matrix\n");
	for(int i=0;i<2;i++) //rows of matrix
	{
		for(int j=0;j<2;j++) //columns of matrix
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&arr1[i][j]);


		}
	}
	// Enter the elements of 1st matrix  
	printf("\nEnter the elements of 2nd matrix\n");
	for(int i=0;i<2;i++) //rows of matrix
	{
		for(int j=0;j<2;j++) //columns of matrix
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&arr2[i][j]);

		}
	}
	// Sum of the elements of 2 matrices   
	printf("\nSum of matrix:\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{

			sum[i][j] = arr1[i][j] + arr2[i][j];
			printf("%0.1f\t",sum[i][j]);

		}
		printf("\n");

	}
}
