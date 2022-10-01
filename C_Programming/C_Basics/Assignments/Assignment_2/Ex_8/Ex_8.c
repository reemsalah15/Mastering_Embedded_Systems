/*
 * Ex_8.c
 *
 *  Created on: Oct 1, 2022
 *      Author: Reem Salah Shehab
 */


#include <stdio.h>
void main()
{
	char sign;
	float n1,n2;

	// User must enter the operator
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&sign);

	// User must enter two operands
	printf("Enter two operands : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&n1,&n2);

	switch(sign)
	{
	case '+':
		printf("%0.1f %c %0.1f = %0.1f",n1,sign,n2,n1+n2);
		break;
	case '-':
		printf("%0.1f %c %0.1f = %0.1f",n1,sign,n2,n1-n2);
		break;
	case '*':
		printf("%0.1f %c %0.1f = %0.1f",n1,sign,n2,n1*n2);
		break;
	case '/':
		printf("%0.1f %c %0.1f = %0.1f",n1,sign,n2,n1/n2);
		break;
	}

}



