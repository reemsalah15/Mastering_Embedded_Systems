/*
 *  C Function to reverse digits in number
 *
 *  Created on: Feb 13, 2023
 *      Author: Reem Salah
 *
 */
#include<stdio.h>

/*  Define a function with an integer input representing
 *  the number to be reversed and integer output representing the reversed number.*/
void reverse_digit(int no);

int main()
{
	int no;
	printf("Enter number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&no);
	reverse_digit(no);
return 0;
}
void reverse_digit(int no)
{
	// Initialize a variable reversed with a value of 0.
	int rem,rev=0;

	//While the input number is not equal to 0:
	while(no!=0)           									 //digit= 123          12              1         0
	{
		/*Get the last digit of the input number by computing
		the remainder of the input number divided by 10.*/

		rem = no % 10;     									 //digit=123%10=3     12%10=2        1%10=1

		//Add the last digit to reversed multiplied by 10.
		rev = rev*10 + rem; 								 // 0*10+3=3          3*10 + 2=32    32*10+1=321

		//	3. Divide the input number by 10, rounding down to the nearest integer.
		no=no/10;         									 //digit=123/10=12    12/10=1        1/10=0

	}
	// Return the value of reversed.
	printf("%d",rev);
}







