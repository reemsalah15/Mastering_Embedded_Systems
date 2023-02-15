/*
 * C function that reverse an input array
 *
 *  Created on: Feb 15, 2023
 *      Author: Reem Salah
 */


#include<stdio.h>
void reverses(int n,int arr[]);
int main()
{
	int size;
	printf("Enter size: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&size);
	int arr[size];
	printf("\nEnter the number for array\n");
	fflush(stdout);
	fflush(stdin);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	reverses(size,arr);
	return 0;

}

void reverses(int n,int arr[])
{

	for (int i=n-1,j=0;i>=0,j<n;i--,j++)
	{
		printf("Element %d: %d\n",j,arr[i]);
	}
}
