/*
 * C function to return the index of last occurrence of a number in a given array
 *
 *  Created on: Feb 15, 2023
 *      Author: Reem Salah
 */

#include<stdio.h>
void find_index(int n,int arr[]);
int main()
{
	int arr[]={1,2,3,4,5,7,8};
	int no;
	printf("Enter the number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&no);
	find_index(no,arr);
	return 0;
}

void find_index(int n,int arr[])
{
	int k=-1;
	for(int i=0;i<7;i++)
	{
		if(n==arr[i])
			k=i;

		else
			continue;

	}
	printf("index=%d",k);
}
