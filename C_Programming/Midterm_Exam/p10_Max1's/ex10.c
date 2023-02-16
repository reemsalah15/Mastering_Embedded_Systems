/*
 *  C function to print Max number of 1's between two 0's
 *
 *  Created on: Feb 14, 2023
 *      Author: Reem Salah
 */


#include<stdio.h>

void max_ones(int n);

int main()
{
	int n;
	printf("Enter number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&n);
	max_ones(n);
	return 0;
}
void max_ones(int n)
{
	int count=0;
	while(n!=0)
		{
			n=(n&(n<<1));  //shift left number by 1 then make Anding with the base number.
			printf("%d ",n);
			count++;
		}
		printf("\nMax 1's: %d",count);
}
//0110 1110=110
//1101 1100 &  0110 1110 = 0100 1100(76)  count=1
//1001 1000 &  0100 1100 = 0000 1000 (8)  count=2
//0001 0000 &  0000 1000 = 0000 0000 	  count=3
