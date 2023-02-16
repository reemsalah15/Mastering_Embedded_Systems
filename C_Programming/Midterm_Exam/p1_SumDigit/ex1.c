/*
 * Function to take a number and sum all digits
 *
 *  Created on: Feb 12, 2023
 *      Author: Reem Salah
 */

/*
 *                 *************************************************************
 *
 * function name: sum_digit
 * parameter of the function: int digit
 * return type is int
 *
*/
#include<stdio.h>

int sum_digit(int num);

int main()
{
	int no;
	printf("Enter number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&no);
	printf("Sum of digit: %d",sum_digit(no));
return 0;
}
int sum_digit(int num)
{
	//Initialize a variable sum to 0 to keep track of the running sum of digits.
	int rem,sum=0;
	//Use a while loop to extract the digits of the number one by one until the number becomes 0.
	while(num!=0)         				//digit= 123           12        1         0
	{
		// Extract the rightmost digit of the number
		rem = num % 10;  				 //digit=123%10=3     12%10=2   1%10=1
		 // Remove the rightmost digit from the number


		num=num/10;     				//digit=123/10=12	12/10=1   1/10=0
		 // Add the digit to the running sum
		sum = sum + rem;   				 //sum=0+3=3           3+2=5     5+1=6
	}
	return sum;
}






