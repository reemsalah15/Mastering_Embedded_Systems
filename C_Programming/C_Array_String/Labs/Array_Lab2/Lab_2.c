/*
 * Lab_2.c
 *
 *  Created on: Oct 6, 2022
 *      Author: Reem Salah Shehab
 */

//Lab_2: Calculate polynomial value for a set of inputs

#include<stdio.h>
void main()
{
	float y , x[5]={5,16,22,3.5,15};

	for(int i=0;i<5;i++){
		y = 5 * x[i] * x[i] + 3  * x[i] + 2;
		fflush(stdin);
		fflush(stdout);
		printf("y(%f) = %f\r\n",x[i],y);
	}

}

