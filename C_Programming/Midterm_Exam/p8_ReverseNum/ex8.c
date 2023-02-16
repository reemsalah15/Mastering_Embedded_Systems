/*
 *  C Function to reverse numbers in the array list.
 *
 *  Created on: Feb 14, 2023
 *      Author: Reem Salah
 */


#include<stdio.h>


void rev(int a[],int size);

int main()
{
	int size;
	printf("Enter size: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&size);
	int a[size];
	printf("Enter list of number: ");
	fflush(stdout);
	fflush(stdin);
	rev(a,size);
	return 0;
}

/* Define a function with an integer array input representing the array list
   and an integer input representing the size of the array.*/

void rev(int a[],int size)
{
	int temp[size],i,j=size-1;
	for(i=0;i<size;i++)
	{
		//While start(i) is less than end(j)
		scanf("%d",&a[i]);
		//swap the values at the start and end indices.
		temp[j]=a[i];
		//increment start(i) and decrement end(j).
		j--;
	}
	//print the list number
	for(int i=0;i<size;i++)
	{
		printf("%d ",temp[i]);
	}
}
