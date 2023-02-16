/*  C Function to count the numbers of 1's in binary representation.
 *
 *  Created on: Feb 13, 2023
 *      Author: Reem Salah
 *
 */
#include<stdio.h>

void num_ones(int n);
int main()
{
	int n;
	printf("Enter number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&n);  //4
	num_ones(n);
	return 0;
}
void num_ones(int n)
{
	int bit=0,count=0;
	printf("No in binary: ");
	for(int c=31;c>=0;c--){   //int has 32 bit (4byte*8bit=32bit (range from 0 to 31)


		bit=n>>c;			//bit = 0000 0100>>3 --> 0000 0000
							//bit = 0000 0100>>2 --> 0000 0001
							//bit = 0000 0100>>1 --> 0000 0010
							//bit = 0000 0100>>0 --> 0000 0100
		if(bit&1){
			printf("1");
			count++;
		}
		else
			printf("0");
	}
	printf("\nNum of 1's: %d",count);
}
