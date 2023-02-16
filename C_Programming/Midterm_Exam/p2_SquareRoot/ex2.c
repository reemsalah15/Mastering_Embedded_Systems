/*
 * c function to take an integer number and calculate it's square root
 *
 *  Created on: Feb 13, 2023
 *      Author: Reem Salah
 */

/*
 * algorithm of the function:
 * //take number(no)from user to find square root
 * //need two variable one for temp and another one to store result
 * //initial temp to 0
 * //make initial guess divide number by 2
 * //then make while loop to compare between temp and and res
 * //make a condition (res!=temp)
 * //then assign temp to res
 * //res=(n/temp + temp)/2;
 * //return res if(res = temp)
 *
 */



#include<stdio.h>

float square_root(int n);

int main()
{
	int no;
	//take number(no)from user to find square root
	printf("Enter number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&no);
	printf("Square root of number: %.3f",square_root(no));
	return 0;

}
float square_root(int n)
{
	//need two variable one for temp and another one to store result
	float res,temp=0; //initial temp to 0
	res=n/2;           //store half of the number
	while(res!=temp)
	{
		temp=res;
		res=(n/temp + temp)/2;
	}
	return res;
}
