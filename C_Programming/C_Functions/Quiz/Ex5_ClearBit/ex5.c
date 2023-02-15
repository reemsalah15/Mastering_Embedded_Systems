/*
 *  Clear a specific bit in a given number
 *
 *  Created on: Feb 15, 2023
 *      Author: Reem Salah
 */

#include<stdio.h>
int clear_bit(int no,int bit);
int main()
{
	int no,bit,new_no;
	printf("Enter number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&no);
	printf("Enter bit you want to clear: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&bit);
	printf("Number before clear %d",no);
	new_no=clear_bit(no,bit);
	printf("\nNumber after clear %d",new_no);


}
int clear_bit(int no,int bit)
{

	no=no&(~(1<<bit));
	return no;
}
