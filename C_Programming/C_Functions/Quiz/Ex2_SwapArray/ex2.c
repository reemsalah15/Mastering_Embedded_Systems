/*
 * C program for swapping two arrays "A&B" with different length
 *
 *  Created on: Feb 15, 2023
 *      Author: Reem Salah
 */

#include<stdio.h>
int main()
{
int a[20],b[20],temp[20];
printf("Enter the number for array a: ");
fflush(stdout);
fflush(stdin);
for(int i=0;i<10;i++)
{
	scanf("%d",&a[i]);
}

printf("\nEnter the number for array b: ");
fflush(stdout);
fflush(stdin);
for(int i=0;i<7;i++)
{
	scanf("%d",&b[i]);

}
printf("\nNumber after swapping\n");
for(int i=0;i<10;i++)
{
	temp[i]=a[i];
	a[i]=b[i];
	b[i]=temp[i];
}
printf("\n1st Array\n");
for(int i=0;i<7;i++)
{
	printf("\nElement %d: %d",i+1,a[i]);
}
printf("\n2nd Array\n");
for(int i=0;i<10;i++)
{
	printf("\nElement %d: %d",i+1,b[i]);
}
}


