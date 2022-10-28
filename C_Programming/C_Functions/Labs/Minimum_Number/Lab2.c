/*
 * Lab2.c
 *
 *  Created on: Oct 24, 2022
 *      Author: Reem Salah Shehab
 */

// Lab2: Find the minimum number in the list of array

#include<stdio.h>

int calcMin(int values[],int n);

void main()
{
	int arr1[10]={4,8,3,6,7,1,9,6,11,21};
	int arr2[8]={14,20,74,30,69,2,22,41};
	int arr3[6]={120,34,55,14,30,66};


	printf("Minimum of array1 is %d\n\n",calcMin(arr1,10));
	printf("Minimum of array2 is %d\n\n",calcMin(arr2,8));
	printf("Minimum of array3 is %d\n\n",calcMin(arr3,6));

}
int calcMin(int values[],int n)
{
	int min,i=0;
	min=values[i];
	for(; i <= n; i++)
	{
		if(values[i]<min)
		{
			min=values[i];
		}
	}
	return min;
}


