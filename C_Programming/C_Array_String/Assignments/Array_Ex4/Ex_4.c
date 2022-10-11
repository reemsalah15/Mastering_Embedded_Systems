/*
 * Ex_4.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Reem Salah Shehab
 */

// EX4: C Program to Insert an element in an Array

#include<stdio.h>
void main()
{
	int n,insert_element,location;

	printf("Enter no of elements : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	int arr[100];

	// Function: To enter items in the 3x3 matrix
	for(int i=0;i<n;i++)
	{


		scanf("%d",&arr[i]);

	}

	// Function: To Print items of the 3x3 matrix
	printf("Enter the element to be inserted : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&insert_element);

	printf("Enter the location : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&location);

	/* increase size by */
	n++;

	/* Shift elements forward */
	for(int i=n-1;i>=location;i--)
	{
		arr[i]=arr[i-1];
	}

	/*Insert new element in the array at location entered by user*/
	arr[location-1]=insert_element;

	/*print the array after insertion */
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		printf("%d ",arr[i]);

		fflush(stdout);


	}


}
