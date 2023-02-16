/*
 *  C function to find the unique number in array list.
 *
 *  Created on: Feb 13, 2023
 *      Author: Reem Salah
 */

#include<stdio.h>

void unique(int arr[],int size);

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
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);

	}
	unique(a,size);
	return 0;
}

void unique(int arr[],int size)
{

	for(int i=0; i<size; i++)
	{
		int count=0;
		for(int j=0;j<size;j++)
		{
			if(arr[i]==arr[j]&& i!=j)
			{
				count++;
			}
		}
		if(count==0)
			printf("%d ",arr[i]);

	}

}
