/*
 * main.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Reem Salah Shehab
 */

/*
 * Function  : Calculate area and circumference of a circle.
 * variables : radius,choice,pi,area,circumference.
 */
#include<stdio.h>
void main()
{
	int radius;
	char choice;
	float pi=3.14,area,circumference;
	printf("Enter circle radius: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&radius);

	printf("Enter your choice (a to print area, c to print circumference): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&choice);


	if(choice=='a'){
		area=radius*radius*pi;
		printf("area is %f",area);
	}
	else if(choice=='c'){
		circumference=2*pi*radius;
		printf("circumference is %f",circumference);
	}
}

