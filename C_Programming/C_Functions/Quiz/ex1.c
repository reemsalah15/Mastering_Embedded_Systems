/*
 * Write a C program takes string from the user and check if it the same USERNAME or not.
 *
 *  Created on: Feb 15, 2023
 *      Author: Reem Salah
 */

#include<stdio.h>
int compare(char a[],char b[]);

int main()
{
	char arr1[]="reem_salah15";
	char arr2[100];
	printf("Enter your username: ");
	fflush(stdout);
	fflush(stdin);
	gets(arr2);
	if(compare(arr1,arr2)==1)
			printf("Correct username");
	else
			printf("Wrong username");
	return 0;
}
int compare(char a[],char b[])
{
	int i=0;
	while(a[i]==b[i])
	{
		if(a[i]=='\0' || b[i]=='\0')
		{
			break;
		}
		i++;
	}
	if(a[i]=='\0' && b[i]=='\0')
		return 1;
	else
		return 0;

}

