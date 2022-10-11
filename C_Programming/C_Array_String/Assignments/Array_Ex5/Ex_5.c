/*
 * Ex_5.c
 *
 *  Created on: Oct 11, 2022
 *      Author: Reem Salah Shehab
 */


// EX5: C Program to Search an element in an Array

#include<stdio.h>
void yy()
{
	int n, key;

	printf("Enter no of elements : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	int arr[100];

	// Function: To enter items in the array
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	// Function: Enter the element to be searched 
	printf("Enter the element to be searched : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&key);


	// Function: Search for an element in array 
	for(int i=0;i<n;i++)
	{
		if (key == arr[i])
		{
			printf("Number  found at the location = %d ",i+1);
			break;
		}

	}




}



